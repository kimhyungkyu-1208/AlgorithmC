//
//  main.cpp
//  EX11931
//
//  Created by 김형규 on 2021/07/30.
//

#include "bits/stdc++.h"
using namespace std;
bool comp(int x, int y){
    if(x>y)
        return true;
    return false;
}
int main(int argc, const char * argv[]) {
    vector<int>a;
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(), a.end(), comp);
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<"\n";
    }
    return 0;
}

