#include <bitset>
#include <iostream>
using namespace std;
int main(){
    unsigned int number;
    cin>>number;
std::bitset<32> binary(number);
cout<<binary.count()<<endl;
}
