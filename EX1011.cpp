//
//  main.cpp
//  EX1011
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
using namespace std;
int main(int argc, char** agrv){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base :: sync_with_stdio(false);
    int tc;
    int i;
    int cnt;
    cin>>tc;
    for(int z=0; z<tc; z++){
        cnt=0;
        int s, e;
        cin>>s>>e;
        i=1;
        while(s<=e){
            s+=i;
            if(s>=e){
                cnt++;
                break;
            }
            else{
                cnt++;
            }
            e-=i;
            if(s>=e){
                cnt++;
                break;
            }
            else{
                cnt++;
            }
            i++;
        }
        cout<<cnt<<"\n";
    }
    return 0;
}

