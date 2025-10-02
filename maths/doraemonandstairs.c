#include<stdio.h>

int main() {
    int n, m;
    scanf("%d", &n, &m);
    
    // If n is less than m, it's impossible to find a multiple of m
    // that is also greater than or equal to n.
    if (n < m) {
        printf("-1\n");
    } else {
        // Calculate the smallest integer greater than or equal to n/2.
        // We use integer division and add 1 if n is odd.
        int half_n = (n + 1) / 2;
        
        // Find the smallest multiple of m that is greater than or equal to half_n.
        int result = ((half_n + m - 1) / m) * m;
        
        // Print the result.
        printf("%d\n", result);
    }
    
    return 0;
}
