//
//  main.cpp
//  EX14003
//
//  Created by 김형규 on 2021/07/22.
//
#include "bits/stdc++.h"

typedef long long ll;
using namespace std;
#define NUM1 105
#define NUM2 10005
int pos[1000001];
int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    int cnt=0;
    
    vector<int>arr;
    vector<int>print;
    vector<int>dp;
    
    while(n--){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    dp.push_back(arr[0]);
    
    for(int i=1; i<arr.size(); i++){
        if(dp[dp.size()-1] < arr[i]){
            dp.push_back(arr[i]);
            cnt++;
            pos[i] = cnt;
        }
        else{
            int idx = lower_bound(dp.begin(), dp.end(), arr[i]) - dp.begin();
            dp[idx] = arr[i];
            pos[i] = idx;
        }
    }
    cout<<dp.size()<<"\n";
    
    for(int i = arr.size()-1; i >= 0 && cnt >= 0; i--){
        if(pos[i] == cnt){
            print.push_back(arr[i]);
            cnt--;
        }
    }
    
    for(int i = print.size() - 1; i >= 0; i--){
        cout<<print[i]<<" ";
    }
    return 0;
}
