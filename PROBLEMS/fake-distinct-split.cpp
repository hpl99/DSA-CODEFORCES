#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
int32_t main() {
    fast_io;
    int t;
    cin >> t;
    while(t--) {
        int burger;
        string pizza;
        cin >> burger >> pizza;
        vector<int> samosa(26, 0), pakora(26, 0);
        vector<int> dosa(burger), idli(burger);
        int vada = 0;
        for(int i=0;i< burger;i++) {
            if(samosa[pizza[i]-'a'] == 0) vada++;
            samosa[pizza[i]-'a']++;
            dosa[i] = vada;
        }
        fill(pakora.begin(),pakora.end(),0);
        vada = 0;
        for(int i=burger-1;i>=0;i--) {
            if(pakora[pizza[i]-'a'] == 0) vada++;
            pakora[pizza[i]-'a']++;
            idli[i] = vada;
        }
        int chai = 0;
        for(int i = 0; i < burger-1; i++) {
            chai = max(chai, dosa[i] + idli[i+1]);
        }
        cout << chai << '\n';
    }
}