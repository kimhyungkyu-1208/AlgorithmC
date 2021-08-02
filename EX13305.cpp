//
//  main.cpp
//  EX13305
//
//  Created by 김형규 on 2021/07/22.
//
#include "bits/stdc++.h"

using namespace std;
#define FIO cin.tie(NULL), cout.tie(NULL) ,ios_base :: sync_with_stdio(false)
typedef long long ll;

int main(int argc, const char * argv[]) {
    FIO;
    
    ll N;  //city num;
    vector<ll> len;    //city to city len;
    vector<ll> cost;   //city gas cost;    int x;
    ll x;
    ll sum = 0;
    cin>>N;
    
    for(ll i=0; i<N-1; i++){
        cin>>x;
        len.push_back(x);
    }
    
    for(ll i=0; i<N; i++){
        cin>>x;
        cost.push_back(x);
    }
    
    for(ll i=0; i<len.size(); i++){
        if(cost[i]<cost[i+1]){
            cost[i+1] = cost[i];
        }
    }
    
    for(ll i=0; i<len.size(); i++){
        sum += (cost[i]*len[i]);
    }
    
    cout<<sum<<"\n";
    
    return 0;
}

