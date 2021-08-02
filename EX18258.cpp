//
//  main.cpp
//  EX18258
//
//  Created by 김형규 on 2021/07/22.
//

#include "bits/stdc++.h"
#define FIO cin.tie(NULL), cout.tie(NULL) ,ios_base :: sync_with_stdio(false)

using namespace std;
string arr;
int main(){
    FIO;
    queue<int> que;
    
    int n, x;
    string com;
    cin>>n;
    
    while(n--){
        cin>>com;
        if(com == "push"){
            cin>>x;
            que.push(x);
        }
        else if(com == "pop"){
            if(que.size() == 0)
                cout<<-1<<"\n";
            else{
                cout<<que.front()<<"\n";
                que.pop();
            }
        }
        else if(com == "size"){
            cout<<que.size()<<"\n";
        }
        else if(com == "empty"){
            if(que.size() == 0){
                cout<<1<<"\n";
            }
            else{
                cout<<0<<"\n";
            }
        }
        else if(com == "front"){
            if(que.size() == 0)
                cout<<-1<<"\n";
            else
                cout<<que.front()<<"\n";
        }
        else if(com == "back"){
            if(que.size() == 0)
                cout<<-1<<"\n";
            else
                cout<<que.back()<<"\n";
        }
    }
}
