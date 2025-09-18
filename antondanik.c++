#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    string str;
    cin>>str;
    char target = 'A';
    char target1 = 'D';

    int count = std::count(str.begin(), str.end(), target);
    int count1= std::count(str.begin(), str.end(), target1);
    if(count>count1){
        cout<<"Anton"<<endl;
    }
    else if(count1>count){
        cout<<"Danik"<<endl;
    }
    else{
        cout<<"Friendship"<<endl;
    }
    return 0;
}