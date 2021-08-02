//
//  main.cpp
//  EX12852
//
//  Created by 김형규 on 2021/07/22.
//
#include "bits/stdc++.h"

typedef long long ll;
using namespace std;

#define NUM1 105
#define NUM2 1000005
int dp[NUM2];
int arr[NUM2];
int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    
    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;
    
    for(int i=2; i<=n; i++){
        dp[i] = dp[i-1]+1;
        if(i%3==0){
            dp[i] = min(dp[i/3]+1, dp[i]);
        }
        if(i%2==0){
            dp[i] = min(dp[i/2]+1, dp[i]);
        }
        if(i%3==0 && dp[i] == dp[i/3]+1){
            arr[i] = i/3;
        }
        else if(i%2==0 && dp[i] == dp[i/2]+1){
            arr[i] = i/2;
        }
        else{
            arr[i] = i-1;
        }
    }
    cout<<dp[n]<<"\n";
    
    while(n != 0){
        cout<<n<<"\n";
        n = arr[n];
    }
    
    return 0;
}

////
////  main.cpp
////  12865
////
////  Created by 김형규 on 2021/06/28.
////
//
//#include "bits/stdc++.h"
//
//typedef long long ll;
//using namespace std;
//vector<int>arr;
//int n, ans = INT_MAX;
//vector<pair<vector<int>, int>>ansvec;
//void bfs(int x, int cnt, vector<int>a){
//    a.push_back(x);
//
//    if(a.size() > ans){
//        return;
//    }
//
//    if(x == 1){
//        ans = min(ans, cnt);
//        ansvec.push_back({a, ans});
//        a.pop_back();
//        return;
//    }
//
//    if(x%3 == 0){
//        bfs(x/3, cnt+1, a);
//    }
//
//    if(x%2 == 0){
//        bfs(x/2, cnt+1, a);
//    }
//
//    bfs(x-1, cnt+1, a);
//}
//
//int main(int argc, const char * argv[]) {
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    cin>>n;
//    bfs(n, 0, arr);
//    cout<<ans<<"\n";
//
//    for(int i=0; i<ansvec.size(); i++){
//        if(ansvec[i].second == ans){
//            for(int j=0; j<ans+1; j++){
//                cout<<ansvec[i].first[j]<<" ";
//            }
//            return 0;
//        }
//    }
//    return 0;
//}
//


