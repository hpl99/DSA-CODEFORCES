#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0;i<n;i++) {
            cin >> arr[i];
        } 
        sort(arr.begin(),arr.end()); 
        int count = 0;
        if (n>0){
            count= 1; 
            for (int i= 1;i<n;i++)
            {
                if (arr[i]!=arr[i- 1])
                {
                    count++;
                }
            }
        }
        int x= 0;    
        for(int i=0;i< n;i++) {
            if (arr[i]>=count) {
                x=arr[i];
                break;
            }
        }  
        cout << x << "\n";
    }
    return 0;
}