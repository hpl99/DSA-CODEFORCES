#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    k--;

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int threshold = a[k];
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] >= threshold && a[i] > 0) {
            count++;
        } else {
            break;
        }
    }

    printf("%d\n", count);
    return 0;
}
