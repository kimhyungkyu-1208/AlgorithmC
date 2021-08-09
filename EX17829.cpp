//
//  EXERCISE.cpp
//  AlgorithmC
//
//  Created by 김형규 on 2021/08/03.
//

#include "bits/stdc++.h"
#define FIO ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define NUM 1024

typedef long long ll;
using namespace std;

int d[4][2] = {{0,0},{0,1},{1,0},{1,1}}, n, arr[NUM][NUM], v[NUM][NUM];
int ans;

int pulling(int x, int y, int size){
    vector<int>p;
    
    if(size == 2){
        for(int i=y; i<y+2; i++){
            for(int j=x; j<x+2; j++){
                p.push_back(arr[j][i]);
                v[j][i] = 1;
            }
        }
        sort(p.begin(), p.end());
        return p[2];
    }
    
    for(int i=0; i<4; i++){
        int dx = d[i][0]*size/2+x;
        int dy = d[i][1]*size/2+y;
        
        if(0<=dx&&dx<n && 0<=dy&&dy<n && !v[dx][dy]){
            p.push_back(pulling(dx, dy, size/2));
        }
    }
    
    sort(p.begin(), p.end());
    return p[2];
}

int main(int argc, const char * argv[]) {   FIO//입출력 가속
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[j][i];
        }
    }
    
    cout<<pulling(0, 0, n);
    
    return 0;
}




