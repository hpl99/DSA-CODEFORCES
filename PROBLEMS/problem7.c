#include <stdio.h>
int main() {
    int n, num;
    int evencount = 0, 
    oddcount = 0;
    int evenindex = 0,
     oddindex = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &num);
        if (num % 2 == 0) {
            evencount++;
            evenindex = i;
        } else {
            oddcount ++;
            oddindex = i;
        }
    }

    if (evencount == 1)
        printf("%d\n", evenindex);
    else
        printf("%d", oddindex);

    return 0;
}

