#include<iostream>
using namespace std;
int n ,k;
bool good(int x){
    int y = 0;
    for(int i=1;i<=x;i++){
        y+=5*i;
    }
    return y<=240-k;
}
int main(){
    cin >> n >> k;
    int l = 0;
    int r = n;
    while(r>=l)
    {
        int m = (l+r)/2;
        if(good(m))
        {
            l=m;
        }
        else{
            r=m-1;
        }
    }
    cout << l << endl; 
}