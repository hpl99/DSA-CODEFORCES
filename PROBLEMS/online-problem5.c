#include <stdio.h>
int main() {
    long long n, m, a;
    scanf("%lld %lld %lld", &n, &m, &a);

    long long i,j;
    for (i = 1; ; i++) {
        if (a * i >= n)
            break;
    }
    for (j = 1; ; j++) {
        if (a * j >= m)
            break;
    }
    printf("%lld\n", i * j);
    return 0;
}
