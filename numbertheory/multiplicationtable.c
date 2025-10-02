#include <stdio.h>

int main() {
    int a, b, count = 0;
    scanf("%d %d", &a, &b);

    for (int i = 1; i <= a; i++) {
        if (b % i == 0) {
            int j = b / i;
            if (j <= a) {
                count++;
            }
        }
    }

    printf("%d\n", count);
    return 0;
}