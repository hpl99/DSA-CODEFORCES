#include<iostream>
using namespace std;
int main(){
    int t ;
    cin >> t;
    while(t--){
        int n ;
        cin >> n;
        int count = 0;
        while(n>2){
            n=n-2;
            count++;
        }
        cout << count << endl;
    }
    
}