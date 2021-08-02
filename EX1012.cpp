//
//  main.cpp
//  1285B
//
//  Created by 김형규 on 2021/06/09.
//

#include <iostream>
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
#define PI 3.14159265359
using namespace std;
#define FIO cin.tie(NULL), cout.tie(NULL) ,ios_base :: sync_with_stdio(false)
typedef long long ll;

#define MAX 51

int dx[4] = { 0, 0, 1, -1 };
int dy[4] = { 1, -1, 0, 0 };
int arr[MAX][MAX] = { 0, };
bool visit[MAX][MAX] = { false, };
int testcase;
int N, M, num;

void DFS(int x, int y) {
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        
        if (nx < 0 || ny < 0 || nx >= M || ny >= N) continue;
        if (arr[nx][ny] == 1 && !visit[nx][ny]) {
            visit[nx][ny] = true;
            DFS(nx, ny);
        }
    }
}


int main(int argc, const char * argv[]) {
    FIO;
    
    cin >> testcase;
    
    while (testcase--) {
        int cnt = 0;
        memset(arr, 0, sizeof(arr));
        memset(visit, false, sizeof(visit));
        cin >> N >> M >> num;
        for (int i = 0; i < num; i++) {
            int x, y;
            cin >> y >> x;
            arr[x][y] = 1;
        }
        
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                if (arr[i][j] == 1 && !visit[i][j]) {
                    cnt++;
                    visit[i][j] = true;
                    DFS(i, j);
                }
            }
        }
        
        cout << cnt << endl;
    }
    
    return 0;
}

