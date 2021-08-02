//
//  main.cpp
//  EX6588
//
//  Created by 김형규 on 2021/08/01.
//

#include <iostream>
#include <math.h>

#define FIO ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
typedef long long ll;
using namespace std;
bool arr[1000005];
void so(int x){
    for(int i=1; i<=sqrt(x); i++){
        if(arr[i])
            for(int j=i*2; j<=x; j+=i){
                arr[j] = false;
            }
    }
}

int main(int argc, const char * argv[]) {   FIO//입출력가속
    int n;
    memset(arr, true, sizeof(arr));
    arr[0] = false;
    arr[1] = false;
    so(1000000);
    do{
        cin>>n;
        if(n==0){
            return 0;
        }
        for(int i=2; i<=1000000; i++){
            if(arr[i]&&arr[n-i]&&i<=n-i){
                cout<<n<<" "<<"="<<" "<<i<<" "<<"+"<<" "<<n-i;
                break;
            }
            else if(i>n-i && n!=0){
                cout<<"Goldbach's conjecture is wrong.";
                break;
            }
        }
        if(n!=0)
            cout<<"\n";
        
    }while(n);
}
