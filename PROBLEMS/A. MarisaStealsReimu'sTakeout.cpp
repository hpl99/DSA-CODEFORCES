#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,a,b,k;
        cin>>n>>a>>b>>k;
        long long d=abs(a-b);
        d=min(d,n-d);
        long long m=n/2;
        cout<<d+min(k,m-d)<<"\n";
    }
}