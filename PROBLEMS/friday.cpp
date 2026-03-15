/*
PROG: friday
LANG: C++
*/
#include <iostream>
#include <fstream>
using namespace std;
bool isLeap(int year) {
    if (year % 400 == 0) return true;
    if (year % 100 == 0) return false;
    return (year % 4 == 0);
}
int main() {
    ifstream fin("friday.in");
    ofstream fout("friday.out");
    int N;
    fin >> N;
    int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int freq[7] = {0};  // Saturday, Sunday, Monday, Tuesday, Wednesday, Thursday, Friday
    int weekday = 2;    // Jan 1, 1900 was a Monday → weekday = 2 (Saturday=0,...Friday=6)
    for (int year = 1900; year < 1900 + N; year++) {
        for (int month = 0; month < 12; month++) {
            int day13 = (weekday + 12) % 7;
            freq[day13]++;
            int days = days_in_month[month];
            if (month == 1 && isLeap(year)) days = 29;
            weekday = (weekday + days) % 7;
        }
    }
    fout << freq[0];
    for (int i = 1; i < 7; i++)
        fout << " " << freq[i];
    fout << endl;

    return 0;
}
