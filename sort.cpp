//
//  main.cpp
//  sort
//
//  Created by 김형규 on 2021/07/23.
//

#include "bits/stdc++.h"
#define SIZE 20
using namespace std;
int arr[SIZE];
void SelectionSort(){   //가장 작은수 계속 비교해 나가면서 정렬
    for(int i=0; i<SIZE-1; i++){
        for(int j=i; j<SIZE-1; j++){
            if(arr[i] > arr[j+1]){
                swap(arr[i], arr[j+1]);
            }
        }
    }
}

void bubbleSort(){  //자신의 앞과 뒤를 보면서 비교해나가면서 정렬
    for(int i=0; i<SIZE-1; i++){
        for(int j=SIZE-1; j>i; j--){
            if(arr[j-1] > arr[j]){
                swap(arr[j], arr[j-1]);
            }
        }
    }
}

void bubbleSort_ver2(){  //만약 버블정렬이 완료되어있으면 그 즉시 빠져나옴! 성능 약간 개선!
    for(int i=0; i<SIZE-1; i++){
        int cnt=0;
        for(int j=SIZE-1; j>i; j--){
            if(arr[j-1] > arr[j]){
                cnt++;
                swap(arr[j], arr[j-1]);
            }
        }
        if(cnt == 0){
            break;
        }
    }
}


void bubbleSort_ver3(){  //정렬이 완료된 앞쪽은 교환이 이루어 지지 않는다는 성질을 이용하여 성능 개선
    int k=0;
    while(k < SIZE-1){
        int last = SIZE-1;
        for(int j=SIZE-1; j>k; j--){
            if(arr[j-1] > arr[j]){
                swap(arr[j], arr[j-1]);
                last = j;
            }
            k = last;
        }
    }
}

void insertSort(){  //밀어내기!
    int i,j;
    for(i=1; i<SIZE; i++){
        int tmp = arr[i];
        for(j=i; j>0; j--){
            arr[j] = arr[j-1];
            if(arr[j-1]<tmp)
                break;
        }
        arr[j] = tmp;
    }
}


int main(int argc, const char * argv[]) {
    
    for(int i=0; i<SIZE; i++){
        arr[i] = rand()%133;
    }
    insertSort();
    for(int i=0; i<SIZE; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}

