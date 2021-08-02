//
//  main.cpp
//  EX2187
//
//  Created by 김형규 on 2021/07/23.
//

#include "bits/stdc++.h"

using namespace std;
int n,m,v;
int arr[1005][1005];
int visited[10005];
queue<int>q;
int d[4][2] = {{1,0},{-1,0},{0,-1},{0,1}};

void dfs(int x){
    cout<<x<<" ";
    visited[x] = 1;
    
    for(int i=1; i<=n; i++){
        if(visited[i] == 0 && arr[i][x] && arr[x][i]){
            dfs(i);
        }
    }
}

void bfs(int x){
    visited[x] = 1;
    q.push(x);
    
    while(!q.empty()){
        int qf = q.front();
        q.pop();
        cout<<qf<<" ";
        for(int i=1; i<=n; i++)
        if(arr[i][qf] && arr[qf][i] && !visited[i]){
            q.push(i);
            visited[i] = 1;
        }
    }
}

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin>>n>>m>>v;
    
    while(m--){
        int x,y;
        cin>>x>>y;
        arr[x][y] = 1;
        arr[y][x] = 1;
    }
    dfs(v);
    cout<<"\n";
    fill(visited, visited+1005, 0)
    bfs(v);
    return 0;
}
