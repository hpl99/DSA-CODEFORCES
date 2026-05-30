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

vector<int> lno ;

void  gen_luckyno(int n){
    if(n>1000){
        return;
    }  
    if(n != 0)
        lno.push_back(n);

    gen_luckyno(n * 10 + 4);
    gen_luckyno(n * 10 + 7);
}

int32_t main() {
    fast_io;
    int arr[] = {4,7,77,44,47,74,444,447,474,477,777,747,774,744};
    int s = 0;
    int n;
    cin >> n;
    for(int i=0;i<14;i++){
        if((n%arr[i])==0){
            s=1;
        }
    }
    if(s==1){
        cout << "YES" ;
    }
    else{
        cout << "NO" ;
    }
    //  gen_luckyno(0);

    // for(int x : lno) {         recursive soln 
    //     if(n % x == 0) {
    //         cout << "YES";
    //         return 0;
    //     }
    // }

    // cout << "NO";
}