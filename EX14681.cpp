//
//  main.cpp
//  EX14681
//
//  Created by 김형규 on 2021/07/22.
//

#include "bits/stdc++.h"
using namespace std;

int main(int argc, const char * argv[]) {
    int x,y;
    cin>>x>>y;
    
    if(x>0 && y>0){cout<<1;}
    else if(x<0 && y>0){cout<<2;}
    else if(x<0 && y<0){cout<<3;}
    else if(x>0 && y<0){cout<<4;}
    else cout<<0;
    
    return 0;
}
