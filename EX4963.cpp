//
//  main.cpp
//  EX4963
//
//  Created by 김형규 on 2021/07/31.
//

#include <iostream>
#include <queue>
typedef long long ll;
using namespace std;
int w, h, v[51][51], m[51][51];
int cnt;
int d[8][2] = {{1,0}, {0,1}, {1,1}, {-1,0}, {0,-1}, {-1,-1}, {1,-1}, {-1,1}};
queue<pair<int, int>>q;
void dfs(int wid, int hei){
    
    v[wid][hei]=1;
    
    for(int i=0; i<8; i++){
        int wd = wid+d[i][0];
        int he = hei+d[i][1];
        
        if(1<=wd&&wd<=w && 1<=he&&he<=h && !v[wd][he] && m[wd][he]){
            dfs(wd, he);
        }
    }
    
    
}
int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    do{
        cnt=0;
        memset(v, false, sizeof(v));
        memset(m, false, sizeof(m));
        cin>>w>>h;
        for(int i=1; i<=h; i++){
            for(int j=1; j<=w; j++){
                cin>>m[j][i];
                if(m[j][i]){
                    q.push({j,i});
                }
            }
        }
        
        while(!q.empty()){
            if(!v[q.front().first][q.front().second]){
                dfs(q.front().first, q.front().second);
                cnt++;
            }
            q.pop();
        }
        if(w && h)
            cout<<cnt<<"\n";
        
    }while(w&&h);
    return 0;
}
