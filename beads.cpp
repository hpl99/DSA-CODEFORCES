/*
PROG: beads
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ifstream fin("beads.in");
    ofstream fout("beads.out");

    int N;
    string beads;
    fin >> N >> beads;

    beads += beads; // double for circular wraparound
    int maxBeads = 0;

    for (int i = 0; i < N; i++) {
        // Count right side
        char rightColor = 'w';
        int rightCount = 0;
        for (int j = i; j < i + N; j++) {
            char c = beads[j];
            if (rightColor == 'w' && c != 'w')
                rightColor = c;
            if (c == rightColor || c == 'w')
                rightCount++;
            else
                break;
        }

        // Count left side
        char leftColor = 'w';
        int leftCount = 0;
        for (int j = i - 1; j > i - N; j--) {
            char c = beads[(j + 2 * N) % (2 * N)];
            if (leftColor == 'w' && c != 'w')
                leftColor = c;
            if (c == leftColor || c == 'w')
                leftCount++;
            else
                break;
        }

        int total = leftCount + rightCount;
        if (total > N) total = N; // can't collect more than total beads
        maxBeads = max(maxBeads, total);
    }

    fout << maxBeads << endl;
    return 0;
}
