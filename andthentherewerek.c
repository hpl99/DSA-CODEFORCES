#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int count  = 0;
        int result = n;
        for(int i=n-1;i>0;i--)
        {
            result &=i;
            if((result)==0){
                count = i;
                break;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}