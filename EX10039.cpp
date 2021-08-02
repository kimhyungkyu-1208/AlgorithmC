//
//  main.cpp
//  EX10039
//
//  Created by 김형규 on 2021/08/01.
//

#include <iostream>
#define FIO ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
typedef long long ll;
using namespace std;

int main(int argc, const char * argv[]) {   FIO//입출력가속
    int arr[5], sum=0;
    for(int i=0; i<5; i++){
        cin>>arr[i];
        if(arr[i] < 40){
            arr[i]=40;
        }
        sum+=arr[i];
    }
    cout<<sum/5;
    return 0;
}
