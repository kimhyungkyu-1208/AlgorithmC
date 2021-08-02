//
//  main.cpp
//  EX16139
//
//  Created by 김형규 on 2021/07/22.
//

#include "bits/stdc++.h"

using namespace std;
#define FIO cin.tie(NULL), cout.tie(NULL) ,ios_base :: sync_with_stdio(false)

int arr[2005000][28];
string str;
int N;

int main(int argc, const char * argv[]) {
    FIO;
    cin >> str;
    for (int i = 0; i < str.length(); ++i) {
        // 이전꺼 합
        if (i != 0) {
            for (int k = 0; k < 26; ++k)
                arr[i][k] = arr[i - 1][k];
        }
        int now = str[i] - 'a';
        arr[i][now]++;
    }

    cin >> N;
    for (int i = 0; i < N; ++i) {
        char num;
        int l, r;
        cin >> num;
        cin >> l >> r;
        int now = num - 'a';

        int p1 = l > 0 ? arr[l - 1][now] : 0;
        int p2 = arr[r][now];
        cout << p2 - p1 << '\n';
    }

    return 0;
}


