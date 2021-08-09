//
//  EXERCISE.cpp
//  AlgorithmC
//
//  Created by 김형규 on 2021/08/03.
//

#include "bits/stdc++.h"
#define FIO ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define NUM 2200

typedef long long ll;
using namespace std;
int n, one, zero;
bool arr[NUM][NUM];
bool v[NUM][NUM];
int d[4][2] = {{0,0}, {1,0}, {0,1}, {1,1}};

void paper(int x, int y, int size){
    int z=0, o=0;
    
    for(int i=y; i<y+size; i++){
        for(int j=x; j<x+size; j++){
            if(arr[j][i] == 0){
                z++;
            }
            else if(arr[j][i] == 1){
                o++;
            }
            if(z == size*size){
                zero++;
                for(int i=y; i<y+size; i++)
                    for(int j=x; j<x+size; j++)
                        v[j][i] = 1;
            }
            else if(o == size*size){
                one++;
                for(int i=y; i<y+size; i++)
                    for(int j=x; j<x+size; j++)
                        v[j][i] = 1;
            }
            else if(o>0 && z>0){
                for(int k=0; k<4; k++){
                    int dx = size/2*d[k][0]+x;
                    int dy = size/2*d[k][1]+y;
                    
                    if(0<=dx&&dx<n && 0<=dy&&dy<n && !v[dx][dy]){
                        paper(dx, dy, size/2);
                    }
                }
            }
        }
    }
}

int main(int argc, const char * argv[]) {   FIO//입출력 가속
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[j][i];
        }
    }
    
    paper(0, 0, n);
    cout<<zero<<"\n"<<one;
    
    return 0;
}





