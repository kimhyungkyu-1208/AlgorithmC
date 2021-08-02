//
//  main.cpp
//  EX18870
//
//  Created by 김형규 on 2021/06/28.
//

#include "bits/stdc++.h"

typedef long long ll;
using namespace std;

#define NUM1 105
#define NUM2 1000000005

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    vector<ll>arr;
    vector<ll>dp;
    
    while(n--){
        int x;
        cin>>x;
        arr.push_back(x);
        dp.push_back(x);
    }
    sort(dp.begin(), dp.end());
    dp.erase(unique(dp.begin(),dp.end()),dp.end());
    
    for(int i=0; i<arr.size(); i++){
        ll idx = lower_bound(dp.begin(), dp.end(), arr[i]) - dp.begin();
        cout<<idx<<" ";
    }
    
    return 0;
 }

