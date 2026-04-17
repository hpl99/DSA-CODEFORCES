#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        vector<pair<long long,int>> monsters(n);
        for (int i = 0; i < n; i++) {
            long long h;
            cin >> h;
            long long eff = h % k;
            if (eff == 0) eff = k;
            monsters[i] = {eff, i+1};
        }

        sort(monsters.begin(), monsters.end(), [](auto &a, auto &b){
            if (a.first != b.first) return a.first > b.first;
            return a.second < b.second;
        });

        for (auto &p : monsters) cout << p.second << " ";
        cout << "\n";
    }
    return 0;
}