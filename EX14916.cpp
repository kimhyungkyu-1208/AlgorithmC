//
//  main.cpp
//  EX14916
//
//  Created by 김형규 on 2021/08/01.
//

#include <iostream>

#define FIO ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
typedef long long ll;
using namespace std;

int main(int argc, const char * argv[]) {   FIO//입출력가속
    int n,cnt=0;
    cin>>n;
    while(n){
        if(n%5==0){
            cnt+=n/5;
            n=0;
        }
        else{
            n-=2;
            cnt++;
        }
        if(n<0){
            cout<<-1;
            return 0;
        }
    }
    cout<<cnt;
    
    return 0;
}
