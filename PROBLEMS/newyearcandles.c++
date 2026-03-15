#include <bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
int32_t main() {
    fast_io;
    int a, b;
    cin >> a >> b;
    int count = a;
    int y = a;
    while (y >= b) {
        int e = (y - y % b) / b;
        count += e;
        y = e + (y % b);
    }
    cout << count << endl;
}
