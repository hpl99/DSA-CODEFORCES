/*
PROG: gift1
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <vector>
using namespace std;

int main() {
    ifstream fin("gift1.in");
    ofstream fout("gift1.out");

    int NP;
    fin >> NP;
    vector<string> names(NP);
    map<string, int> balance;

    for (int i = 0; i < NP; i++) {
        fin >> names[i];
        balance[names[i]] = 0;
    }

    for (int i = 0; i < NP; i++) {
        string giver;
        fin >> giver;
        int money, num;
        fin >> money >> num;

        if (num > 0) {
            int gift = money / num;
            int total_given = gift * num;
            balance[giver] -= total_given;

            for (int j = 0; j < num; j++) {
                string receiver;
                fin >> receiver;
                balance[receiver] += gift;
            }
        } else {
        }
    }

    for (string name : names) {
        fout << name << " " << balance[name] << endl;
    }

    return 0;
}
