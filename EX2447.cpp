//
//  EXERCISE.cpp
//  AlgorithmC
//
//  Created by 김형규 on 2021/08/03.
//

#include "bits/stdc++.h"
#define FIO ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define NUM 10000005

typedef long long ll;
using namespace std;
int n;
void star(int x, int y, int size){
    if(x%3==1 && y%3==1){
        cout<<" ";
        return;
    }
    else{
        for(int i=3; i<=size; i*=3){
            if(x/i%3==1 && y/i%3==1){
                cout<<" ";
                return;
            }
        }
        cout<<"*";
    }
}
int main(int argc, const char * argv[]) {   FIO//입출력 가속
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            star(j, i, n);
        }
        cout<<"\n";
    }
    
    return 0;
}


