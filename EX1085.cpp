//
//  main.c
//  algorythem
//
//  Created by 김형규 on 2021/03/19.

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>
#include <stdlib.h>
#include <string.h>
#include <cmath>
using namespace std;
#define SIZE 10005
int main(int argc, char** agrv){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base :: sync_with_stdio(false);
    int x,y,w,h;
    cin>>x>>y>>w>>h;
    
    cout<<min(x, min(y, min(w-x, h-y)));
    return 0;
}

