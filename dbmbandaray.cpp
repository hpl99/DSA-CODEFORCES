#include <bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define endl '\n'
#define int long long
int32_t main() {
    fast_io;
    int t;
    cin >> t;
    while(t--) {
        int n, s, x;
        cin >> n >> s >> x;
        vector<int> arr(n);
        int count = 0;
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            count += arr[i];
        }
        bool pakya = false;
        for(int i = 0; i < n; i++) {
            if(count == s) {
                cout << "YES" << endl;
                pakya = true;
                break;
            }
            count += x;
            if(count > s) {
                cout << "NO" << endl;
                pakya = true;
                break;
            }
        }
        if(!pakya) {
            cout << "NO" << endl;
        }
    }
}
