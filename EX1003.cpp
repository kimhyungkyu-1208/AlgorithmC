//
//  main.cpp
//  EX1003
//
//  Created by 김형규 on 2021/07/22.
//

#include <iostream>
using namespace std;
#define LENGTH 45
int arr[LENGTH][2];

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int tc;
    cin>>tc;
    
    arr[0][0] = 1;
    arr[0][1] = 0;
    arr[1][0] = 0;
    arr[1][1] = 1;
    
    for(int i=2; i<LENGTH; i++){
        arr[i][0] = arr[i-1][0]+arr[i-2][0];
        arr[i][1] = arr[i-1][1]+arr[i-2][1];
    }
    
    while(tc--){
        int x;
        cin>>x;
        
        cout<<arr[x][0]<<" "<<arr[x][1]<<"\n";
    }
    
    return 0;
}

