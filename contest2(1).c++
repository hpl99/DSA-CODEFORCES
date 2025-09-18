#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

        unordered_map<int, int> multiplesA;

        // Build multiples of a
        for (int i = 1; i * a < 1000; ++i) {
            multiplesA[i * a] = i - 1; // 0-based (no op for i = 1)
        }

        int minOps = 1e9;
        for (int j = 1; j * b < 1000; ++j) {
            int val = j * b;
            if (multiplesA.count(val)) {
                int ops = (j - 1) + multiplesA[val];
                minOps = min(minOps, ops);
                break; // first match is enough
            }
        }

        if (minOps == 1e9)
            cout << -1 << endl; // No common multiple < 1000
        else
            cout << minOps << endl;
    }

    return 0;
}
