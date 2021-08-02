//
//  main.cpp
//  EX1010
//
//  Created by 김형규 on 2021/07/22.
//
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>
#include <stdlib.h>
#include <string.h>
#include <cmath>
#include <utility>
#include <tuple>
#include <stack>
#define PI 3.14159265359
using namespace std;
#define FIO cin.tie(NULL), cout.tie(NULL) ,ios_base :: sync_with_stdio(false)
typedef long long ll;

int main(int argc, char** argv){
    FIO;
    int testCase;
    cin>>testCase;
    
    for(int i=1; i<=testCase; i++){
        ll l,r, sum=1;
        cin>>l>>r;
        
        if(l == 0 || r == 0){
            cout<<0<<"\n";
        }
        else if(l == r){
            cout<<1<<"\n";
        }
        else{
            for(ll x=r, y=1; x>r-l; x--, y++){
                sum *= x;
                sum /= y;
            }
            cout<<sum<<"\n";
        }
    }
}

