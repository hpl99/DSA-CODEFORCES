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
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> arr(26, 0);
        int count = 0;
        int old_sum = 0;
        int x = 0;
        for(int i=0;i<n;i++) {
            arr[s[i]-'a']++;
            count++;
            if(arr[s[i]-'a'] == 2) {
                arr.assign(arr.size(), 0);
                old_sum = count;
                count=0;
                x = i;
                break;
            }
        }
        if(x>0){
        for(int i=x;i<n;i++)
        {
            arr[s[i]-'a']++;
        }
        for(int i=0;i<arr.size();i++) {
            if(arr[i]>=1) {
                count++;
            }
        }
        cout << count + old_sum-1 << endl;
    }
    else{
    cout << count + old_sum << endl;
    }
        
    }
}