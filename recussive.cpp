//
//  main.cpp
//  recussive
//
//  Created by 김형규 on 2021/07/23.
//

#include <iostream>
using namespace std;

int greatest_common_devisor(int x, int y){  //유클리드 호재법 이용
    if(y == 0){
        return x;
    }
    else{
        return greatest_common_devisor(y, x%y);
    }
}
void recur(int n){
    if(n > 0){
        recur(n-1);
        cout<<n<<endl;
        recur(n-2);
    }
}
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
