//
//  main.cpp
//  12865
//
//  Created by 김형규 on 2021/06/28.
//

#include "bits/stdc++.h"

typedef long long ll;
using namespace std;
#define NUM 505
int n, chn;
vector<char>ch;

void re(int mo, int ja, int idx, vector<char>ans){
    
    if(ans.size() == n && mo>=1 && ja>=2 && ans[n-1]!=' '){
//        int x=(int)ans[0];
//        for(int i=0; i<ans.size(); i++){
//            if(x>ans[i])
//                return;
//            if(i!=ans.size()-1 && ans[i]>ans[i+1]){
//                return;
//            }
//        }
        for(int i=0; i<ans.size(); i++){
            cout<<ans[i];
        }
        cout<<"\n";
        return;
    }
    else if(ans.size() == n){
        return;
    }
    
    for(int i=idx; i<ch.size(); i++){
        if(!ans.empty())
            if(ans.back()>=ch[i])
                i=upper_bound(ch.begin(), ch.end(), ans.back())-ch.begin();
        if(i>=ch.size())
            break;
        ans.push_back(ch[i]);
        if(ans.back() == 'a' || ans.back() == 'e' || ans.back() == 'i' || ans.back() == 'o' || ans.back() == 'u'){
            re(mo+1, ja, idx+1, ans);
        }
        else{
            re(mo, ja+1, idx+1, ans);
        }
        ans.pop_back();
    }
    if(!ans.empty()){
        ans.pop_back();
    }
    return;
   
}
int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>chn;
    for(int i=0; i<chn; i++){
        char c;
        cin>>c;
        ch.push_back(c);
    }
    sort(ch.begin(), ch.end());
    vector<char>c;
    re(0, 0, 0, c);
    return 0;
}

