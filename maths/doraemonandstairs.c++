#include <bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
int32_t main() {
    fast_io;
    int n, m;
    cin >> n >> m;
    if (n < m) {
        cout << "-1\n";
    } else {
        int y = (n + 1) / 2;
        if (y % m != 0) {
            y += m - (y % m);
        }
        cout << y << "\n";
    }
}
