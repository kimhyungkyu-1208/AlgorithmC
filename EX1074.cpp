//
//  main.cpp
//  EX1074
//
//  Created by 김형규 on 2021/07/27.
//

#include <iostream>
using namespace std;
int N, r, c, cnt;

void re(int y, int x, int size){
    if(y == r && x == c){
        cout<<cnt;
        exit(0);
    }
    
    if(0<=r && r<y+size && 0<=c && c<x+size){
        re(y, x, size/2);
        re(y, x+size/2, size/2);
        re(y+size/2, x, size/2);
        re(y+size/2, x+size/2, size/2);
    }
    else{
        cnt += size*size;
    }
}
int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    
    cin>>N>>r>>c;
    re(0, 0, 1<<N);
    
    return 0;
}
