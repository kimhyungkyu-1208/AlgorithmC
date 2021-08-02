//
//  main.c
//  algorythem
//
//  Created by 김형규 on 2021/03/19.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>
#include <stdlib.h>
#include <string.h>
using namespace std;
int arr[1005];
int main(int argc, char** agrv){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base :: sync_with_stdio(false);
    
    int n, hund, ten, one;
    cin>>n;
    
    for(int i=1; i<1001; i++){
        hund = i/100;
        ten = (i%100)/10;
        one = (i%100)%10;
        if(i<100){
            arr[i] = i;
        }
        else if(i>=100 && i<111){
            arr[i] = arr[i-1];
        }
        else{
            if(hund-ten == ten-one){
                arr[i] = arr[i-1]+1;
            }
            else{
                arr[i] = arr[i-1];
            }
        }
    }
    
    cout<<arr[n];
}

