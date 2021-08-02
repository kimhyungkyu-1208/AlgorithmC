//
//  main.cpp
//  EX15988
//
//  Created by 김형규 on 2021/07/22.
//

#include "bits/stdc++.h"

typedef long long ll;
using namespace std;

#define FIO ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define NUM 10000005
ll dp[NUM];

int main(int argc, const char * argv[]) {
    FIO;//입출력 가속
    ll n, tc;
    cin>>tc;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    for(ll i=4; i<=NUM; i++){
        dp[i] = (dp[i-2]+dp[i-1]+dp[i-3])%1000000009;
    }
    while(tc--){
        cin>>n;
        cout<<dp[n]<<"\n";
    }
    
    return 0;
}

