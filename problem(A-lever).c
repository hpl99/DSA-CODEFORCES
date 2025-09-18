#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int &x : a) cin >> x;
        for (int &x : b) cin >> x;

        int sum_diff = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] > b[i]) sum_diff += (a[i] - b[i]);
        }

        cout << sum_diff + 1 << "\n";
    }

    return 0;
}