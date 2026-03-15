#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int compare(const void *a, const void *b) 
{
    return (*(int *)a - *(int *)b);
}
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        int x = 0;
        for (int i = 0; i < n; i++) {
            x ^= arr[i];
        }
        if (x == 0) {
            printf("1\n");
            continue;
        }
        qsort(arr, n, sizeof(int), compare);
        int count = 0;
        if (n > 0) {
            count = 1;
            for (int i = 1; i < n; i++) {
                if (arr[i] != arr[i - 1]) {
                    count++;
                }
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
