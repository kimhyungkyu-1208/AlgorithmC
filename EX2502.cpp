//
//  main.cpp
//  EX15649
//
//  Created by 김형규 on 2021/07/30.
//

#include "bits/stdc++.h"
using namespace std;
long dp[31][2];
int main(int argc, const char * argv[]) {
    int n, m, a=0, b=0;
    cin>>n>>m;
    
    dp[1][0] = 1;
    dp[2][1] = 1;
    
    for(int i=3; i<=30; i++){
        dp[i][0] = dp[i-1][0]+dp[i-2][0];
        dp[i][1] = dp[i-1][1]+dp[i-2][1];
    }
    
    while(m){
        m-=dp[n][0];
        a++;
        if(m%dp[n][1]==0){
            b = m/dp[n][1];
            cout<<a<<"\n"<<b;
            return 0;
        }
    }
    return 0;
}

