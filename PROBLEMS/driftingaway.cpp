#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define endl '\n'
#define int long long

int32_t main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {

        string s;
        cin >> s;

        // Check if invalid pattern exists
        bool bad = false;
        for (int i = 0; i + 1 < s.length(); i++) {
            if (s[i] != '<' && s[i+1] != '>') {
                bad = true;
                break;
            }
        }

        if (bad) {
            cout << -1 << endl;
            continue;
        }

        int left = count(s.begin(), s.end(), '<');
        int right = count(s.begin(), s.end(), '>');

        cout << s.length() - min(left, right) << endl;
    }
}
