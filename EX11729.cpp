//
//  main.cpp
//  EX11729
//
//  Created by 김형규 on 2021/07/23.
//

#include <iostream>
using namespace std;
int cnt, arr[10000005][2],i;
void hanoi(int n, int x, int y){
    if(n > 1){
        hanoi(n-1, x, 6-x-y);
    }
    arr[i][0]=x;
    arr[i][1]=y;
    i++;
    cnt++;
    
    if(n > 1){
        hanoi(n-1, 6-x-y, y);
    }
}

int main(int argc, const char * argv[]) {
    
//    cout<<greatest_common_devisor(100, 25);
    int x;
    cin>>x;
    hanoi(x, 1, 3);
    cout<<cnt<<"\n";
    
    for(int i = 0; i<cnt; i++){
        cout<<arr[i][0] << " " << arr[i][1]<<"\n";
    }
    
    return 0;
}


