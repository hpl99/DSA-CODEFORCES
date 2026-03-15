#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define endl '\n'
#define int long long

int32_t main() {
    fast_io;
    long long n;
    cin >> n;
    long long temp = n;
    long long count = 0;
    vector<int> arr; 
    arr.reserve(20);
    while (temp > 0) {
        arr.push_back(temp % 10);
        temp /= 10;
    }
    int y = arr.size();
    reverse(arr.begin(), arr.end());
    for (int i = 0; i < y; i++) {
        int x = arr[i];
        if (x >= 5) {
            count = count * 10 + (9 - x);
        } else {
            count = count * 10 + x;
        }
    }
    if (count < pow(10, y - 1)) {
        cout << arr[0];
        for (int i = 1; i < y; i++) {
            int x = arr[i];
            if (x >= 5) cout << (9 - x);
            else cout << x;
        }
        cout << endl;
        return 0;
    }
    cout << count << endl;
}
