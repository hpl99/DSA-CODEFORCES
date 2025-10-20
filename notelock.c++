#include <iostream>
#include <string>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int arr[n];
        int j = 0;
        for (int i = 0; s[i]!='\0'; i++) {
            if (s[i] == '1') 
            {
                arr[j] = i;
                j++;
            }
        }
        int count = 0;
        for (int i = 0; i < j; i++) 
        {
            if ((arr[i + 1] - arr[i]) >= k)
             {
                count++;
            }
        }
        if(j==1){
            cout << "1" << endl;
        }
        else if(j==0){
            cout << "0"<<endl;
        }
        else
        cout << count+1  << endl;
    }
    return 0;
}
