#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int days;
    cin >> days;
    while(days--) {
        int x;
        cin >> x;
        int l = -1; 
        int r = n;
        while(r > l + 1) {
            int m = (l + r) / 2;
            if(arr[m] <= x) {
                l = m; 
            } else {
                r = m;  
            }
        }
        cout << l + 1 << endl;
    }

    return 0;
}
