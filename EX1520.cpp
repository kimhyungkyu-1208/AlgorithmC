//
//  main.cpp
//  12865
//
//  Created by 김형규 on 2021/06/28.
//

#include "bits/stdc++.h"

typedef long long ll;
using namespace std;
#define NUM 505
int n, m;
int cnt;

int arr[NUM][NUM];
int visited[NUM][NUM];
int dp[NUM][NUM];
int d[4][2] = {{-1,0}, {1,0}, {0,-1}, {0,1}};

int findRoot(int x, int y){
    if(x == m && y == n){
        return 1;
    }
    if(visited[x][y]){
        return dp[x][y];
    }
    
    visited[x][y] = 1;
    for(int i=0; i<4; i++){
        int dx = x+d[i][0];
        int dy = y+d[i][1];
        
        if(1<=dx&&dx<=m && 1<=dy&&dy<=n){
            if(arr[x][y] > arr[dx][dy]){
                dp[x][y]+=findRoot(dx, dy);
            }
        }
    }
    return dp[x][y];
}

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin>>m>>n;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            cin>>arr[i][j];
        }
    }
    
    cout<<findRoot(1, 1);
    
    
    return 0;
}

