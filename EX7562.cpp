//
//  main.cpp
//  EX7562
//
//  Created by 김형규 on 2021/07/26.
//

#include "bits/stdc++.h"

using namespace std;
queue<pair<int, int>>q;
int ans = INT_MAX, flag;
bool visited[303][303];
int dp[303][303];
int d[8][2] = {{1,2}, {1,-2}, {-1,2}, {-1,-2}, {2,-1}, {2,1}, {-2,-1}, {-2,1}};
int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tc, N, cur[2], des[2];
    cin>>tc;
    while(tc--){
        cin>>N>>cur[0]>>cur[1]>>des[0]>>des[1];
        q.push({cur[0], cur[1]});
        
        while(!q.empty()){
            pair<int, int>c = q.front();
            q.pop();
            visited[c.first][c.second]=1;
            if(c.first == des[0] && c.second == des[1]){
                ans = min(ans, dp[des[0]][des[1]]);
            }
            for(int i=0; i<8; i++){
                int dx = c.first+d[i][0];
                int dy = c.second+d[i][1];
                
                if(0<=dx&&dx<N && 0<=dy&&dy<N && !visited[dx][dy] && dp[dx][dy]==0){
                    if(dp[c.first][c.second] < ans){
                        q.push({dx, dy});
                        dp[dx][dy] = dp[c.first][c.second]+1;
                    }
                }
            }
        }
        cout<<ans<<"\n";
        ans = INT_MAX;
        memset(visited, false, sizeof(visited));
        memset(dp, false, sizeof(dp));
        while (q.size()) {
            q.pop();
        }
    }
    
    return 0;
}
