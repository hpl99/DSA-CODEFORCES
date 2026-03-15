#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool is_prime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n;
    scanf("%d", &n);

    while (n--) {
        long long a;
        scanf("%lld", &a);

        double sqrt_a = sqrt(a);
        long long x = (long long)(sqrt_a + 0.5); 
        if (x * x == a && is_prime(x)) {
            printf("YES\n");  
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
