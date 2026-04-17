#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
    int n,k;
    cin >> n>>k;
    vector<pair<int,int>> smal,big;
    for(int i=0;i<n; i++)
    {
        int health;
        cin>> health;
        if(health<= k)
            smal.push_back({health,i+1});
        else
            big.push_back({health,i+1});
    }
    stable_sort(smal.begin(), smal.end(),[](pair<int,int> a, pair<int,int> b)
    {
        return a.first > b.first;
    });

    stable_sort(big.begin(), big.end());
    for(int i=0;i< smal.size(); i++){
        cout << smal[i].second << " ";
    }

    for(int i = 0; i<big.size(); i++){
        cout << big[i].second << " ";
    }
    cout << endl;
}
}