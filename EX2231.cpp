//
//  main.cpp
//  EX2231
//
//  Created by 김형규 on 2021/08/03.
//

#include <iostream>
#define FIO ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
typedef long long ll;
using namespace std;
int n;
int arr[2000005];
bool v[2000005];

int main(int argc, const char * argv[]) {
    FIO//입출력가속
    cin>>n;
    for(int i=1; i<=1000000; i++){
        if(!v[i+(i/1000000)%10+(i/100000)%10+(i/10000)%10+(i/1000)%10+(i/100)%10+(i/10)%10+(i%10)]){
            arr[i+(i/1000000)%10+(i/100000)%10+(i/10000)%10+(i/1000)%10+(i/100)%10+(i/10)%10+(i%10)] = i;
            v[i+(i/1000000)%10+(i/100000)%10+(i/10000)%10+(i/1000)%10+(i/100)%10+(i/10)%10+(i%10)] = 1;
        }
    }
    
    cout<<arr[n];
    
    return 0;
}
