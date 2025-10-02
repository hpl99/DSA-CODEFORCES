#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int temp = n;
        int sum = 0;
        while (temp != 0) {
            sum += temp % 10;
            temp /= 10;
        }
        if (sum % 3 != 0) {
            cout << -1 << endl;
            continue;
        }

        int x = n;
        int count = 0;
        while (x != 1) {
            if (x % 6 == 0) 
            {
                x /= 6;
            } else
            {
                x *= 2;
            }
            count++;

            if (count > 1000) { 
                count = -1;
                break;
            }
        }

        cout << count << endl;
    }

    return 0;
}

/*here first check if sum of elements of num % 3==0 then in loop if divided by 6 then enter
and n%2==0 and again n%2==0  it its ==0 then stop and return count  */