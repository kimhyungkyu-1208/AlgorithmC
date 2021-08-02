//
//  main.cpp
//  EX15649
//
//  Created by 김형규 on 2021/07/30.
//

#include "bits/stdc++.h"
using namespace std;
long dp[5005];
int main(int argc, const char * argv[]) {
    string str;
    cin>>str;
    vector<int>arr;
    for(int i=0; i<str.length(); i++){
        arr.push_back((int)str[i]-48);
    }
//    int x;
//    if(arr[arr.size()-1] == 0){
//        x = 1;
//        if(arr[arr.size()-2] != 0)
//            dp[arr.size()-2] = 1;
//        else{
//            cout<<0;
//
//        }
//    }
//    else{
//        x = 0;
//        dp[arr.size()-1] = 1;
//    }
    dp[arr.size()] = 1;
    
    for(long i=arr.size()-1; i>=0; i--){
        if(1<=arr[i] && arr[i]<=9){
            dp[i] += dp[i+1];
        }
        
        if(10<=arr[i]*10+arr[i+1] && arr[i]*10+arr[i+1]<=26){
            dp[i] += dp[i+2];
        }
        dp[i]%=1000000;
    }
    cout<<dp[0];
    return 0;
}
