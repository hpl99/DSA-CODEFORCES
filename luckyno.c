#include <stdio.h>

int main() {
    int t, arr[4], arr2[4];
    scanf("%d", &t);
    for (int i = t + 1; i <=9012; i++) {
        int temp = i;
        for (int k = 3; k >= 0; k--) {
            arr2[k] = temp % 10;
            temp = temp / 10;
        }
        int found = 1;
        for (int x = 0; x < 4; x++) {
            for (int y = x + 1; y < 4; y++) {
                if (arr2[x] == arr2[y]) {
                    found = 0;
                    break;
                }
            }
            if (!found) break;
        }
        if (found) {
            printf("%d\n", i);
            break;
        }
    }
    return 0;
}