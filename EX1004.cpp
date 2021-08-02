//
//  main.cpp
//  EX1004
//
//  Created by 김형규 on 2021/07/29.
//

#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
struct star{
    int x;
    int y;
    int r;
};
int main(int argc, const char * argv[]) {
    
    int tc;
    cin>>tc;
    
    while(tc--){
        int n, sx, sy, ex, ey, cnt=0;
        cin>>sx>>sy>>ex>>ey>>n;
        vector<star>a;
        while(n--){
            int x, y, r;
            cin>>x>>y>>r;
            a.push_back({x,y,r});
        }
        
        for(int i=0; i<a.size(); i++){
            int d1 = pow(sx-a[i].x, 2)+pow(sy-a[i].y, 2);
            int d2 = pow(ex-a[i].x, 2)+pow(ey-a[i].y, 2);
            
            if(d1 < pow(a[i].r, 2)){
                cnt++;
            }
            if(d2 < pow(a[i].r, 2)){
                cnt++;
            }
            if(d1 < pow(a[i].r, 2) && d2 < pow(a[i].r, 2)){
                cnt-=2;
            }
        }
        cout<<cnt<<"\n";
        a.clear();
    }
    return 0;
}

