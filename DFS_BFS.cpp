//
//  main.cpp
//  EX1074
//
//  Created by 김형규 on 2021/07/24.
//

#include <iostream>
#include <queue>

using namespace std;
int V, M, N;
int arr[1005][1005];
bool visited[1005];

void dfs(int n, int x){
    if(n==0){
        return;
    }
    cout<<x<<" ";
    visited[x] = true;
    
    for(int i=1; i<=N; i++){
        if(arr[x][i] == 1 && arr[i][x] == 1 && !visited[i]){
            dfs(n-1, i);
        }
    }
}

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>N>>M>>V;
    
    while(M--){
        int x,y;
        cin>>x>>y;
        arr[x][y] = 1;
        arr[y][x] = 1;
    }
    dfs(M, V);
    cout<<"\n";
    memset(visited, false, sizeof(visited));
    
    queue<int>q;
    q.push(V);
    visited[V] = 1;
    while(!q.empty()){
        int n = q.front();
        cout<<n<<" ";
        q.pop();
        for(int i=1; i<=N; i++){
            if(arr[n][i] == 1 && arr[i][n] == 1 && !visited[i]){
                q.push(i);
                visited[i] = 1;
            }
        }
    }
    
    return 0;
}

