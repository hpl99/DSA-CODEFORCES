/*
PROG: ride
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int value(string s) {
    int product = 1;
    for (char c : s)
        product = (product * (c - 'A' + 1)) % 47;
    return product;
}

int main() {
    ifstream fin("ride.in");
    ofstream fout("ride.out");
    string comet, group;
    fin >> comet >> group;

    if (value(comet) == value(group))
        fout << "GO" << endl;
    else
        fout << "STAY" << endl;

    return 0;
}
