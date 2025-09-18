#include <stdio.h>
#include <string.h>

int main() {
    char s[101];
    scanf("%100s", s);

    char target[] = "hello";
    int idx = 0;
    int len = strlen(s);

    for (int i = 0; i < len; i++) {
        if (s[i] == target[idx]) {
            idx++;
            if (idx == 5) {  // length of "hello"
                printf("YES\n");
                return 0;
            }
        }
    }
    printf("NO\n");
    return 0;
}
