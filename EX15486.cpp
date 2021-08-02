//
//  main.cpp
//  EX15486
//
//  Created by 김형규 on 2021/07/22.
//

#include "bits/stdc++.h"

typedef long long ll;
using namespace std;
#define NUM1 1005
#define NUM2 10005
ll dp[1500055];
ll ans;
int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll day;
    cin>>day;
    vector<pair<ll, ll>>arr;
    for(int i=0; i<day; i++){
        ll x,y;
        cin>>x>>y;
        arr.push_back({x,y});
    }
    for(int i=0; i<arr.size(); i++){
        dp[i-1+arr[i].first] = max(dp[i-1+arr[i].first], dp[i-1]+arr[i].second);
        if(dp[i]<dp[i-1]){
            dp[i] = dp[i-1];
        }
    }
    
    cout<<dp[day-1];
    
    return 0;
}

