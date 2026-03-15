#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define endl '\n'
#define int long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define ff first
#define ss second

const int INF = 1e18;
const int MOD = 1e9 + 7;

int32_t main(){
    fast_io;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);          
        for (int i=0;i<n;i++) {
            cin >> a[i];
        }
        vector<int> arr(n+1,0);   
        for (int i=0;i<n;i++) {
            if (a[i]<= n) {
                arr[a[i]]++;
            }
        }
        int z=0;
        for (int x=0;x<=n;x++){
            if (x== 0)
            {
                z +=arr[x];
            }
            else if(arr[x]<x)
            {
                z+=arr[x];
            }
            else
            {
                z+=arr[x]- x;
            }
        }
        cout<<z<< endl;
    }
}
