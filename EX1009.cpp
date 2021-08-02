//
//  main.cpp
//  EX1009
//
//  Created by 김형규 on 2021/07/22.
//

#include "bits/stdc++.h"

typedef long long ll;
using namespace std;

#define NUM1 205
#define NUM2 1000005
bool dp[NUM2];
int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int tc,a,b;
    cin>>tc;
    while(tc--){
        cin>>a>>b;
        if(a%10==1){
            cout<<1;
        }
        else if(a%10==0){
            cout<<10;
        }
        else if(a%10== 2){
            if(b%4 == 1){
                cout<<2;
            }
            else if(b%4 == 2){
                cout<<4;
            }
            else if(b%4 == 3){
                cout<<8;
            }
            else if(b%4 == 0){
                cout<<6;
            }
        }
        else if(a%10== 3){
            if(b%4 == 1){
                cout<<3;
            }
            else if(b%4 == 2){
                cout<<9;
            }
            else if(b%4 == 3){
                cout<<7;
            }
            else if(b%4 == 0){
                cout<<1;
            }
        }
        else if(a%10== 4){
            if(b%2 == 1){
                cout<<4;
            }
            else if(b%2 == 0){
                cout<<6;
            }
        }
        else if(a%10== 5){
            cout<<5;
        }
        else if(a%10== 6){
            cout<<6;
        }
        else if(a%10== 7){
            if(b%4 == 1){
                cout<<7;
            }
            else if(b%4 == 2){
                cout<<9;
            }
            else if(b%4 == 3){
                cout<<3;
            }
            else if(b%4 == 0){
                cout<<1;
            }
        }
        else if(a%10== 8){
            if(b%4 == 1){
                cout<<8;
            }
            else if(b%4 == 2){
                cout<<4;
            }
            else if(b%4 == 3){
                cout<<2;
            }
            else if(b%4 == 0){
                cout<<6;
            }
        }
        else if(a%10== 9){
            if(b%2 == 1){
                cout<<9;
            }
            else if(b%2 == 0){
                cout<<1;
            }
        }
        cout<<"\n";
    }
    
    return 0;
}

