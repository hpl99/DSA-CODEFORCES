#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);

        if (n >= 180) 
        {
            printf("NO\n");
        }
        else if (360 % (180 - n) == 0) 
        {
            printf("YES\n");
        }
        else 
        {
            printf("NO\n");
        }
    }
    return 0;
}
