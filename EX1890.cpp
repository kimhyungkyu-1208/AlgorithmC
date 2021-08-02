//
//  main.cpp
//  EX1890
//
//  Created by 김형규 on 2021/07/29.
//

#include <iostream>
using namespace std;
typedef long long ll;
int arr[101][101];
ll dp[101][101];
int d[2][2] = {{1,0}, {0,1}};
ll cnt, N;

ll re(int y, int x){
    if(y == N && x == N){
        return 1;
    }
    if(dp[y][x] != -1){
        return dp[y][x];
    }
    dp[y][x] = 0;
    
    for(int i=0; i<2; i++){
        int dx = x+d[i][0]*arr[y][x];
        int dy = y+d[i][1]*arr[y][x];
        
        if(1<=dy && dy<=N && 1<=dx && dx<=N){
            dp[y][x] += re(dy, dx);
        }
    }
    return dp[y][x];
}

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin>>N;
    for(int i=1; i<=N; i++){
        for(int j=1; j<=N; j++){
            cin>>arr[j][i];
            dp[j][i] = -1;
        }
    }
    re(1, 1);
    cout<<dp[1][1];
    
    
    return 0;
}
