//
//  main.cpp
//  EX7576
//
//  Created by 김형규 on 2021/07/24.
//

#include "bits/stdc++.h"
using namespace std;
int d[4][2] = {{1,0}, {-1,0}, {0,1}, {0,-1}};
int row, col, m[1005][1005][2], cnt, ans, v[1005][1005];

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>col>>row;
    
    for(int i=1; i<=row; i++){
        for(int j=1; j<=col; j++){
            cin>>m[j][i][0];//맵
            m[j][i][1] = 0; //날짜
        }
    }
    
    queue<pair<int, int>>q;
    
    for(int i=1; i<=row; i++){
        for(int j=1; j<=col; j++){
            if(m[j][i][0] == 1){
                q.push({j, i});
            }
        }
    }
    
    while(!q.empty()){
        pair<int,int>a = q.front();
        q.pop();
        m[a.first][a.second][0] = 1;
        
        for(int i=0; i<4; i++){
            int dx=a.first+d[i][0];
            int dy=a.second+d[i][1];
            
            if(1<=dx && dx<=col && 1<=dy && dy<=row && m[dx][dy][0]==0 && v[dx][dy]==0){
                q.push({dx, dy});
                m[dx][dy][1] = m[a.first][a.second][1]+1;
                v[dx][dy] = 1;
            }
        }
    }
    
    for(int i=1; i<=row; i++){
        for(int j=1; j<=col; j++){
            if(m[j][i][0] == 0){
                cout<<-1;
                return 0;
            }
            else{
                ans = max(ans, m[j][i][1]);
            }
        }
    }
    cout<<ans;
    
    
    
    
    return 0;
}

