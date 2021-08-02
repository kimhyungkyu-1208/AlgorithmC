//
//  main.cpp
//  EX12738
//
//  Created by 김형규 on 2021/07/22.
//

#include "bits/stdc++.h"

using namespace std;
#define FIO cin.tie(NULL), cout.tie(NULL) ,ios_base :: sync_with_stdio(false)
typedef long long ll;
vector<ll>arr;
vector<ll>dp;

int main(int argc, const char * argv[]) {
    FIO;
    ll n,x;
    cin>>n;
    
    for(int i=0; i<n; i++){
        cin>>x;
        arr.push_back(x);
    }
    
    dp.push_back(arr[0]);
    for(int i=1; i<n; i++){
        if(dp[dp.size()-1]>=arr[i]){
            ll l=0, r = (int)dp.size()-1;
            while(r>l){
                ll mid = (r+l)/2;
                if(dp[mid]>=arr[i]){
                    r = mid;
                }
                else{
                    l = mid+1;
                }
            }
            dp[l] = arr[i];
        }
        else{
            dp.push_back(arr[i]);
        }
    }
    
    cout<<dp.size()<<"\n";
    
    return 0;
}
