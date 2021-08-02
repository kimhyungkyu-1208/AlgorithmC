//
//  main.cpp
//  EX15596
//
//  Created by 김형규 on 2021/07/22.
//
#include "bits/stdc++.h"

using namespace std;
long long sum(vector<int> &a) {
    long long ans = 0;
    for(int i=0; i<a.size(); i++){
        ans += a[i];
    }
    return ans;
}
