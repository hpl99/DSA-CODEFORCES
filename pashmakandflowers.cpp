#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr.begin(), arr.end());
    long long mn = arr[0];
    long long mx = arr[n - 1];
    long long count_min = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] == mn) count_min++;
    long long count_max = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] == mx) count_max++;

    if (count_min == n) {
        cout << 0 << " " << (1LL * n * (n - 1) / 2);
    } else {
        cout << mx - mn << " " << count_min * count_max << "\n";
    }
    return 0;
}
