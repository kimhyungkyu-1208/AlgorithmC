//
//  main.cpp
//  EX1002
//
//  Created by 김형규 on 2021/07/22.
//
#include "bits/stdc++.h"

using namespace std;
int main(int argc, char** agrv){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base :: sync_with_stdio(false);
    
    int x1, y1, r1, x2, y2, r2, tc;
    double len;   //원의 중심과 중심의 거리
    double sub;
    cin>>tc;
    for(int i=0; i<tc; i++){
        cin>>x1>>y1>>r1>>x2>>y2>>r2;
        len = sqrt(pow(x2-x1, 2)+pow(y2-y1, 2));
        sub = r1>r2 ? r1-r2:r2-r1;
        //내부에 있을때 외부에 있을때 원의 중심이 걸칠때 분리
        if(len == 0 && r1==r2) cout<<-1;
        else if(len<r1+r2 && sub<len) cout<<2;
        else if(len==r1+r2 || sub==len) cout<<1;
        else cout<<0;
        
        cout<<"\n";
    }
    
    return 0;
}


