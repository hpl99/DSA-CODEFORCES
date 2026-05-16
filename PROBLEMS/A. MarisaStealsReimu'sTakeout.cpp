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

#ifdef LOCAL
    #define debug(x) cerr << #x << " = " << x << endl;
#else
    #define debug(x)
#endif

const int INF = 1e18;
const int MOD = 1e9 + 7;

using pii = pair<int,int>;
using vi = vector<int>;
using vvi = vector<vi>;

int mod_add(int a, int b, int m = MOD) { return (a + b) % m; }
int mod_mul(int a, int b, int m = MOD) { return (a * b) % m; }
int mod_pow(int a, int b, int m = MOD) {
    int res = 1;
    while (b > 0) {
        if (b & 1) res = (res * a) % m;
        a = (a * a) % m;
        b >>= 1;
    }
    return res;
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while(t--) {
        // Write your logic here
        int n ;
        cin >> n;
        vector<int> arr(n);
        int z = 0;
        int o = 0;
        int t = 0;
        for(int i=0;i<n;i++){
            cin >> arr[i];
            if(arr[i]==0){
                z++;
            }
            else if(arr[i]==1){
                o++;
            }
            else{
                t++;
            }
        }
        int count = z + ceil((o+t)/3);
        cout << count << endl;
    }
}