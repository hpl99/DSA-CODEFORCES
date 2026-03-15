#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    cin >> n;
    if (n <= 2) {
        cout << n;
        return 0;
    }
    if (n % 2 == 1) {
        cout << n * (n - 1) * (n - 2);
    } else {
        if (__gcd(n, n - 3) == 1) {
            cout << n * (n - 1) * (n - 3);
        } else {
            cout << (n - 1) * (n - 2) * (n - 3);
        }
    }
    return 0;
}
