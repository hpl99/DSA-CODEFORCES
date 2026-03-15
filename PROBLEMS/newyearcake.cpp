#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >>t;
    while(t--) {
        long long a, b;
        cin >> a >> b;
        int lay = 0;
        for(int i=0;i<2;i++) {
            long long x=a,y =b;
            long long o = 1;
            int count = 0;
            while(true){
                if(count%2==i){
                    if(x>=o){
                         x-= o;
                    }
                    else
                    {
                        break;
                    }
                } 
                else 
                {
                    if(y>=o){
                        y-=o;
                    }
                    else{
                        break;
                    }
                }
                count++;
                o=o* 2;
            }
         lay=max(lay,count);
        }
        cout << lay<<endl;
    }
}
