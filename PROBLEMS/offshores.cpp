#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n , x , y;
        cin >> n >> x >> y;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        int count = 0;
        int sum = 0;
        for(int i=1;i<n;i++)
        {
            int xz=arr[i]/x;
            sum+=xz*y;
        }
        cout << sum << endl;
    }
}