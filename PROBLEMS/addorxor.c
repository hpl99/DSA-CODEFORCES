#include <stdio.h>
#include <stdlib.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int a, b, x, y;
        scanf("%d %d %d %d", &a, &b, &x, &y);
        int count = 0;
        int count1 = 0;

        if (a > b) {
            if ((a ^ 1) == b) {
                printf("%d\n", y);
            } else {
                printf("-1\n");
            }
        } else if (a == b) {
            printf("0\n");
        } 
        else {
            int diff = b - a;
            if (x <= y) {
                printf("%d\n", diff * x);
            } 
            else {
                int temp = a;
                int cost = 0;
                while (temp < b) {
                    if (temp % 2 == 0) {
                        temp = temp ^ 1;
                        cost += y;
                    } else {
                        temp = temp + 1;
                        cost += x;
                    }
                }
                if (cost < diff * x)
                    printf("%d\n", cost);
                else
                    printf("%d\n", diff * x);
            }
        }
    }
    return 0;
}
