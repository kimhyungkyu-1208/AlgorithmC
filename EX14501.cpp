//
//  main.cpp
//  EX14501
//
//  Created by 김형규 on 2021/07/22.
//

#include "bits/stdc++.h"

typedef long long ll;
using namespace std;
#define NUM1 1005
#define NUM2 10005
int dp[30];
int ans;
int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int day;
    cin>>day;
    vector<pair<int, int>>arr;
    for(int i=0; i<day; i++){
        int x,y;
        cin>>x>>y;
        arr.push_back({x,y});
    }
    dp[arr[0].first-1] = arr[0].second;
    for(int i=1; i<arr.size(); i++){
        dp[i+arr[i].first-1] = max(dp[i+arr[i].first-1], dp[i-1]+arr[i].second);
        if(dp[i-1]>dp[i]){
            dp[i] = dp[i-1];
        }
    }
    for(int i=0; i<day; i++){
        ans = max(dp[i], ans);
    }
    
    cout<<ans;
    return 0;
}
