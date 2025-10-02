#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    while(n--) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        
        if ((a ^ b) == 0 && (a ^ c) != 0) {
            printf("%d\n", c);
        }
        else if ((a ^ c) == 0 && (a ^ b) != 0) {
            printf("%d\n", b);
        }
        else {
            printf("%d\n", a);
        }
    }
    return 0;
}
