#include <iostream>
#include <vector>
using namespace std;
int countPrimes(int r, int n) {
    if (n < 2 || r > n) return 0;
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= n; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
    int primeCount = 0;
    for (int i = max(r, 2); i <= n; ++i) {
        if (isPrime[i]) ++primeCount;
    }
    return primeCount;
}
int main() {
    int k,l,m,n,d;
    cin >> k >> l  >> m>>n>>d;
    if(k==1)
    cout << d <<endl;
    else
    cout << d-countPrimes(n, d) << endl;
    return 0;
}
