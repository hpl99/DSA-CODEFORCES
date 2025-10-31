#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        bool f = false;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'A') {
                f = true;
                break;
            }
        }
     while (q--) {
            long long a;
            cin >> a;
            long long count = 0;
            int i = 0;
            if (!f) 
            {
                while (a > 0) {
                    a /= 2;
                    count++;
                }
            } 
            else 
            {
                while (a > 0) {
                    if (s[i] == 'A') 
                    {
                        a = a - 1;
                    } 
                    else 
                    {
                        a = a / 2;
                    }
                    count++;
                    i++;
                    if (i == n) {
                        i = 0;
                    }
                }
            }
            cout << count << endl;
        }
    }
}
