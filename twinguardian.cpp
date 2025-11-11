#include <bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
const int MOD = 1e9 + 7;
using pii = pair<int, int>;
using vi = vector<int>;
bool is_prime(int x) {
    if (x <= 1) return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}
int32_t main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        if (a == 2 || b == 2) {
            cout << "N" << endl;
            continue;
        }
        if (is_prime(a) && is_prime(b)) {
            cout << "Y" << endl;
        } else {
            cout << "N" << endl;
        }
    }
    return 0;
}
