#include<bits/stdc++.h> 
using namespace std;
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
int32_t main(){ 
    fast_io;
    int n ;
    cin >> n;
    vector<int> arr(n);
    vector<int> arr1(n);
    for(int i=0;i<n;i++)
    {
        cin >> arr[i] >> arr1[i];
    }
    vector<int> hash(n);
    sort(arr.begin(),arr.end());
    sort(arr1.begin(),arr1.end());
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=i)
        hash[i]=i;
    }
    int found = 0;
    for(int i=0;i<n;i++){
        if(hash[i]==arr1[i])
        {
            found=1;
        }
        else 
        {
            found = 0;
            break;
        }
    }
    if(found) cout <<"I become the guy." << endl;
    else cout << "Oh, my keyboard!" << endl;
}