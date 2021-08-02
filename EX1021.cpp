//
//  main.cpp
//  EX1021
//
//  Created by 김형규 on 2021/07/22.
//
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>
#include <stdlib.h>
#include <string.h>
#include <cmath>
#include <utility>
#include <tuple>
#include <stack>
#include <queue>
#include <deque>
#define PI 3.14159265359
#define FIO cin.tie(NULL), cout.tie(NULL) ,ios_base :: sync_with_stdio(false)
using namespace std;

int main(){
    FIO;
    int count=0;
    deque<int> dq;
    int N, M;
    cin >> N >> M;
    for (int i = 1; i <= N; ++i)
        dq.push_back(i);
    
    for (int i = 0; i < M; ++i) {
        int num;
        cin >> num;
        int index;
        
        for (int i = 0; i < dq.size(); ++i) {
            if (dq[i] == num) {
                index = i;
                break;
            }
        }
        
        if (index < dq.size() - index) {
            for (;;) {
                if (dq.front() == num) {
                    dq.pop_front();
                    break;
                }
                ++count;
                dq.push_back(dq.front());
                dq.pop_front();
            }
        }
        
        else {
            for (;;) {
                if (dq.front() == num) {
                    dq.pop_front();
                    break;
                }
                ++count;
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }
    }
    cout<<count;
    return 0;
}
