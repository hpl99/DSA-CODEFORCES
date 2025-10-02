#include<stdio.h>
int main(){
    int t ;
    scanf("%d",&t);
    while(t--){
        int count =0;
        int found = 0;
        int n;
        scanf("%d",&n);
        if((n+1)%3==0){
            printf("First\n");
        }
        else if((n-1)%3==0){
            printf("First\n");
        }
        else{
            while(n%3==0){
                n=n+1;
                n=n-1;
                count++;
                if(count>10)
                {
                    printf("Second\n");
                    break;
                }
            }
        }
    }
}