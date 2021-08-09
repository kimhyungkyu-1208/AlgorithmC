//
//  EXERCISE.cpp
//  AlgorithmC
//
//  Created by 김형규 on 2021/08/03.
//

#include "bits/stdc++.h"

typedef long long ll;
using namespace std;
class sik{
public:
    int x;
    int y;
    int a;
};

#define FIO ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define NUM 10000005

int main(int argc, const char * argv[]) {
    FIO;//입출력 가속
    sik ans1;
    sik ans2;
    
    cin>>ans1.x>>ans1.y>>ans1.a;
    cin>>ans2.x>>ans2.y>>ans2.a;
    
    for(int i=-999; i<=999; i++){
        for(int j=-999; j<=999; j++){
            if(i*ans1.x+j*ans1.y==ans1.a && i*ans2.x+j*ans2.y==ans2.a){
                cout<<i<<" "<<j;
            }
        }
    }
    return 0;
}

