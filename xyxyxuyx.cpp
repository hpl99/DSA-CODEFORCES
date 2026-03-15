#include <bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define endl '\n'
#define int long long
int32_t main() {
    fast_io;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i=0;i<n;i++) 
        {
            cin >> arr[i];
        }
        if(arr[0]==-1 && arr[n-1]==-1)
         {
            arr[0] = 0;
            arr[n - 1] = 0;
        } 
        else if(arr[0]==-1) 
        {
        arr[0] = arr[n - 1];
        } else if(arr[n - 1]==-1) {
            arr[n-1] = arr[0];
        }
        for(int i=1;i<n-1;i++) {
            if (arr[i]==-1) {
                arr[i] = 0;
            }
        }
        int d;
        if (n>=2) {
            d=abs(arr[n-1]-arr[0]);
        } 
        else {
            d = 0;
        }
        cout << d << endl;
        for (int i=0; i<n;i++) {
            cout<< arr[i];
            if (i<n-1){ 
            cout << " ";
            }
        }
        cout << endl;
    }
}
