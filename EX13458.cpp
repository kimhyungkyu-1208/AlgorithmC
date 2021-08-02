//
//  main.cpp
//  EX13458
//
//  Created by 김형규 on 2021/07/22.
//
#include "bits/stdc++.h"

typedef long long ll;
using namespace std;
#define NUM1 105
#define NUM2 1000005

ll dp[NUM2];
ll cla[NUM2];

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n, sum=0;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>cla[i];
    }
    ll B, C;
    cin>>B>>C;
    
    for(int i=1; i<=n; i++){
        if((cla[i]-B>0) && (cla[i]-B)%C==0)
            dp[i] = (cla[i]-B)/C;
        else if((cla[i]-B>0) && (cla[i]-B)%C!=0)
            dp[i] = (cla[i]-B)/C+1;
        else if((cla[i]-B<0))
            dp[i] = 0;
        
        sum += dp[i];
    }
    cout<<sum+n;
    
    return 0;
}
