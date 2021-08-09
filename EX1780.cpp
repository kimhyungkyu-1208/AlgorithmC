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
int n, mione, zero, one;
int arr[NUM][NUM];
bool v[NUM][NUM];
int d[9][2] = {{0,0}, {1,0}, {2,0}, {0,1}, {1,1}, {2,1}, {0,2}, {1,2}, {2,2}};

void paper(int x, int y, int size){
    int m=0, z=0, o=0;
    for(int i=y; i<y+size; i++){
        for(int j=x; j<x+size; j++){
            if(arr[j][i]==-1){
                m++;
            }
            else if(arr[j][i]==0){
                z++;
            }
            else if(arr[j][i]==1){
                o++;
            }
            if(m==size*size){
                for(int i=y; i<y+size; i++)
                    for(int j=x; j<x+size; j++)
                        v[j][i] = 1;
                mione++;
            }
            else if(z==size*size){
                for(int i=y; i<y+size; i++)
                    for(int j=x; j<x+size; j++)
                        v[j][i] = 1;
                zero++;
            }
            else if(o==size*size){
                for(int i=y; i<y+size; i++)
                    for(int j=x; j<x+size; j++)
                        v[j][i] = 1;
                one++;
            }
            else if((m>0 && (z>0 || o>0)) || (z>0 && (m>0 || o>0)) || (o>0 && (m>0 || z>0))){
                for(int k=0; k<9; k++){
                    int dx = x+size/3*d[k][0];
                    int dy = y+size/3*d[k][1];
                    
                    if(0<=dx&&dx<n && 0<=dy&&dy<n && !v[dx][dy]){
                        paper(dx, dy, size/3);
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
    cout<<mione<<"\n"<<zero<<"\n"<<one;
    
    return 0;
}




