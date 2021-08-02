//
//  main.cpp
//  EX1008
//
//  Created by 김형규 on 2021/07/22.
//
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;

int main (int argc, char const *argv[]){
    int a,b;
    
    cin>>a>>b;
    
    if(a==b){
        cout<<1;
        return 0;
    }
    if(a == 0){
        cout<<0;
        return 0;
    }
    
    for(int i = 1; i <= 9; i++){
        if(i == 1){
            cout<<a/b<<".";
            if(a/b>=1){
                a = a-a/b*b;
            }
        }
        printf("%d", 10*a/b);
        a = 10*a-10*a/b*b;
        if(10*a%b == 0) {
            printf("%d", 10*a/b);
            break;
        }
    }
    return 0;
}
