#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    int num = x;

    if (num >= 1 && num <= 5) {
        printf("1");
    } else {
        int count = num / 5;
        int rem = num % 5;
        if (rem != 0) {
            count++;
        }
        printf("%d", count);
    }

    return 0;
}