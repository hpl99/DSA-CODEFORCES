#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int count1 = 0;
        int count2 = 0;

        for (int i = 0; i < n; i++) {
            int candy;
            scanf("%d", &candy);
            if (candy == 1) {
                count1++;
            } else {
                count2++;
            }
        }

        int total_sum = count1 * 1 + count2 * 2;

        if (total_sum % 2 != 0) {
            printf("NO\n");
        } else {
            int target = total_sum / 2;
            if (target % 2 == 0) {
                printf("YES\n");
            } else {
                if (count1 > 0) {
                    printf("YES\n");
                } else {
                    printf("NO\n");
                }
            }
        }
    }
    return 0;
}