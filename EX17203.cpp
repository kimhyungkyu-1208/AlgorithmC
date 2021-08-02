//
//  main.cpp
//  EX17203
//
//  Created by 김형규 on 2021/07/22.
//
#include "bits/stdc++.h"

using namespace std;
#define FIO cin.tie(NULL), cout.tie(NULL) ,ios_base :: sync_with_stdio(false)

int arr[1005];
int dp[1005];

int main(int argc, const char * argv[]) {
    FIO;
    int N, Q;
    cin>>N>>Q;
    
    for(int i=1; i<=N; i++){
        int num;
        cin>>num;
        arr[i] = num;
    }
    dp[1] = 0;
    for(int i=1; i<N; i++){
        if(arr[i]-arr[i+1]>0){
            dp[i+1] = arr[i]-arr[i+1]+dp[i];
        }
        else{
            dp[i+1] = dp[i]-arr[i]+arr[i+1];
        }
    }
    
    for(int i=0; i<Q; i++){
        int x1, x2;
        cin>>x1>>x2;
        
        cout<<dp[x2]-dp[x1]<<"\n";
    }
    
    return 0;
}
