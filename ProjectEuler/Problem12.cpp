#include<bits/stdc++.h>
using namespace std;
#define int long long
int divisors(long long n){
    int cnt = 1;
    for(long long p=2; p*p<=n; p++){
        int power = 0;
        while(n % p == 0){
            power++;
            n /= p;
        }
        if(power){
            cnt *= (power + 1);
        }
    }
    if(n > 1){
        cnt *= 2;
    }
    return cnt;
}
int32_t main(){
    int n = 1;
    while(true){
        int d;
        if(n % 2 == 0){
            d = divisors(n/2) * divisors(n+1);
        }
        else{
            d = divisors(n) * divisors((n+1)/2);
        }
        if(d > 500){
           cout << (n*(n+1))/2;
            break;
        }
        n++;
    }
}