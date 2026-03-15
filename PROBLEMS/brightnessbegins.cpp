#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long k;
        cin >> k;
        cout << k + int(sqrtl(k) + 0.5) <<endl;
    }
    return 0;
}