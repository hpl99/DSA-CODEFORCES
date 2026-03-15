#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,x;
        int y=0,c=0;
        scanf("%d %d",&n,&x);
        if(n>=x){
             y=n%x;
             if(y!=0)
             {
          x=abs(x-y);
          printf("%d\n",x);
        }
        else{
            printf("0\n");
        }
        }
        else{
            printf("%d\n",abs(n-x));
        }
      } 
    }