#include <iostream>
#include <numeric>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        long long result = -1;
        for (long long i = 2; i <= 1000; i++) {
            for (int j = 0; j < n; j++) {
                if (gcd(arr[j], i) == 1) {
                    result = i;
                    break;
                }
            }
            if (result != -1) break;
        }
        cout << result << endl;
    }
    return 0;
}
