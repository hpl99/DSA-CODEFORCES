#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >>n;
        if(n %9==0)
        {
            long long tt = n;
            int sum = 0;
            while(tt % 10 == 0)
            {
                tt /= 10;
                sum++;
            }
            if(tt ==9&& sum>=1)
            {
                cout << "0" << endl;
            }
            else{
                cout <<"10"<<endl;
            }
        }
        else{
            cout <<"0" << endl;
        }
    }
}


