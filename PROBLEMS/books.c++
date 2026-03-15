#include <iostream>
#include <algorithm>
using namespace std;

int n, t;
int arr[100000];
long long prefix[100001];
bool good(int x)
{
    for (int i = 0; i <= n - x; i++)
    {
        long long y = prefix[i + x] - prefix[i];
        if (y <= t)
            return true;
    }
    return false;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> t;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    prefix[0] = 0;
    for (int i = 1; i <= n; i++) {
        prefix[i] = prefix[i - 1] + arr[i - 1];
    }
    int l = 0;
    int r = n + 1;
    while (r > l + 1) {
        int m = (l + r) / 2;
        if (good(m)) {
            l = m;
        }
        else {
            r = m;
        }
    }
    cout << l << "\n";
    return 0;
}
