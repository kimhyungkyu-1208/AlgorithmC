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
int arr[65][65];
int one, zero;
string ans;

void qt(int x, int y, int size){
    
    zero=0; one=0;
    for(int i=y; i<y+size; i++){
        for(int j=x; j<x+size; j++){
            if(arr[j][i]==true){
                one++;
            }
            else{
                zero++;
            }
        }
    }
    if(one == size*size){
        ans.push_back('1');
        return;
    }
    else if(zero == size*size){
        ans.push_back('0');
        return;
    }
    else{
        ans.push_back('(');
        qt(x, y, size/2);
        qt(x+size/2, y, size/2);
        qt(x, y+size/2, size/2);
        qt(x+size/2, y+size/2, size/2);
        ans.push_back(')');
    }
    
}
int main(int argc, const char * argv[]) {
//    FIO//입출력 가속
    cin>>n;
    cin.ignore();
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            arr[j][i] = (int)getchar()-48;
        }
        cin.ignore();
    }
    qt(0, 0, n);
    
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i];
    }
    return 0;
}


