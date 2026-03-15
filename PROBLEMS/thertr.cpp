#include <iostream>
#include <cmath>  
#include <iomanip> 
using namespace std;
int main() {
    double a, b, c;
    cin >> a >> b >> c;
    double ceil_a = ceil(a / c);
    double ceil_b = ceil(b / c);
    double result = ceil_a * ceil_b;
    cout << fixed << setprecision(0) << result << endl;
    return 0;
}
