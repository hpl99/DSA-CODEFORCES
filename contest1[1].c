#include <stdio.h>
int mycheck(int n, int steps) {
    for (int i = 0; i < steps; i++) {
        if (n % 2 == 0)
            n = n / 2;
        else
            n = 3 * n + 1;
    }
    return n;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int k, x;
        scanf("%d %d", &k, &x);
        int found = 0;
        for (int start = 0; start <= 1000000; start++) {
            if (mycheck(start, k) == x) {
                printf("%d\n", start);
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("-1\n"); 
        }
    }
    return 0;
}
