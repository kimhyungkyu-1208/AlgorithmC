//
//  main.cpp
//  EX12015
//
//  Created by 김형규 on 2021/07/22.
//
#include "bits/stdc++.h"

typedef long long ll;
using namespace std;
#define NUM 505
int n, m;
int cnt;
vector<int>arr;
int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    
    vector<int>dp;
    
    dp.push_back(arr[0]);
    
    for(int i=1; i<arr.size(); i++){
        if(dp[dp.size()-1]<arr[i]){
            dp.push_back(arr[i]);
        }
        else{
            int idx = lower_bound(dp.begin(), dp.end(), arr[i]) - dp.begin();
            dp[idx] = arr[i];
        }
    }
    
    cout<<dp.size();
    return 0;
}



