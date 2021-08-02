//
//  main.cpp
//  EX12865
//
//  Created by 김형규 on 2021/07/22.
//
#include "bits/stdc++.h"
using namespace std;
#define NUM 105
#define WEI 100005

int goods[NUM][2];
int dp[WEI];

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, k, i, ans;
    
    cin>>n>>k;
    
    for(i=0; i<n; i++){
        cin>>goods[i][0];   //wei
        cin>>goods[i][1];   //val
    }
    
    
    for(i=0; i<n; i++){
        for(int j=k; j>=1; j--){
            if(j-goods[i][0] >= 0){
                dp[j] = max(dp[j-goods[i][0]] + goods[i][1], dp[j]);
            }
        }
    }
    ans = 0;
    while(k){
        ans = max(ans, dp[k]);
        k--;
    }
    cout<<ans;
    return 0;
}

