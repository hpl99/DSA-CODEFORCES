#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n , k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end());
    if(arr[k]-arr[k-1]>1)
    cout << arr[k-1]+1 << endl;
    else
    cout << "-1" << endl;
}