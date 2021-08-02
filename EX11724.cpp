//
//  main.cpp
//  EX11724
//
//  Created by 김형규 on 2021/07/31.
//

#include <iostream>

typedef long long ll;
using namespace std;

bool v[1005];    //방문
bool arr[1005][1005];    //연결확인용
int n, m, cnt;   //정점의 갯수 간선의 갯수
void dfs(int x){
    v[x] = true;
    for(int i=1; i<=n; i++){
        if(arr[i][x] && arr[x][i] && !v[i]){
            dfs(i);
        }
    }
}

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>m;
    while(m--){
        int x,y;
        cin>>x>>y;
        arr[x][y] = true;
        arr[y][x] = true;
    }
    
    for(int i=1; i<=n; i++){
        if(!v[i]){
            cnt++;
            dfs(i);
        }
    }
    cout<<cnt;
    
    return 0;
}
