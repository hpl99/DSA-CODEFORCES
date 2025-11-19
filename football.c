#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int count = 0;
    int count1 = 0;
    int found = 0;
    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if (c == '0') {
            count++;
            count1 = 0;
        } else {
            count1++;
            count = 0;
        }
        if (count >= 7 || count1 >= 7) {
            printf("YES\n");
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("NO\n");
    }
    return 0;
}

