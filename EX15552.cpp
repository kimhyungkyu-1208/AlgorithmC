//
//  main.cpp
//  EX15552
//
//  Created by 김형규 on 2021/07/22.
//

#include "bits/stdc++.h"

using namespace std;

int main(int argc, char*argv[]){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, a, b;
    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>a>>b;
        cout<<a+b<<"\n";
    }
    return 0;
}
