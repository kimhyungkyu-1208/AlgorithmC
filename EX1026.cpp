//
//  main.cpp
//  
//
//  Created by 김형규 on 2021/06/28.
//

#include "bits/stdc++.h"

typedef long long ll;
using namespace std;

#define NUM1 105
#define NUM2 1000000005
bool comp(int x, int y){
    if(x>y){
        return true;
    }
    else
        return false;
}
int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int sum=0;
    int n,x,y;
    cin>>n;
    vector<int>arr;
    vector<int>arr1;
    
    while(n--){
        cin>>x;
        arr.push_back(x);
    }
    n=arr.size();
    while(n--){
        cin>>x;
        arr1.push_back(x);
    }
    sort(arr.begin(), arr.end());
    sort(arr1.begin(), arr1.end(), comp);
    
    for(int i=0; i<arr.size(); i++){
        sum+=arr[i]*arr1[i];
    }
    
    cout<<sum;
    return 0;
 }

