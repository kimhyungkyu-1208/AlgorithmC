//
//  main.cpp
//  EX12851
//
//  Created by 김형규 on 2021/07/23.
//

#include "bits/stdc++.h"
using namespace std;
int cnt;
int a = 1000000005;
int visited[1000005];
queue<pair<int, int>>q;

int main(int argc, const char * argv[]) {
    
    int N, K, Min;
    cin>>N>>K;
    queue<pair<int, int>>q;
    vector<int>ans;
    q.push({N,cnt});
    visited[N] = 1;
    
    while(!q.empty()){
        int x = q.front().first;
        int c = q.front().second;
        q.pop();
        visited[x] = 1;
        
        if(!visited[x+1] && x+1<=K){
            q.push({x+1, c+1});
        }
        if(!visited[x-1] && x-1>=0){
            q.push({x-1, c+1});
        }
        if(!visited[2*x] && 2*x<=K+4 && 2*x>=0){
            q.push({x*2, c+1});
        }
        
        if(x == K){
            if(ans.empty()){
                ans.push_back(c);
            }
            else{
                if(ans.back() == c){
                    ans.push_back(c);
                }
            }
        }
    }
    cout<<ans.back()<<"\n"<<ans.size();
    
    return 0;
}

