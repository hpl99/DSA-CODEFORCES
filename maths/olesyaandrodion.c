#include<stdio.h>
int main(){
    long long  n,t;
    scanf("%lld  %lld",&n,&t);
    long long count=1;
    if(n<=19){
    for(long long i=0;i<n-1;i++)
    {
        count=count*10;
    }
    for(long long i=count;;i++)
    {
        if(n==1 && (t>=1 && t<=9))
        {
            printf("%d",t);
            break;
        }
        else if(n>1){
        if(i%t==0)
        {
            printf("%lld",i);
            break;
        }
        }
        else{
            printf("-1");
            break;
        }
    }
    }
    else{
       
        if(t==2 || t==4|| t==5||t==8||t==10)
        {
             printf("1");
          for(int i=0;i<n-1;i++)
          {
              printf("0");
          }
        }
        else if(t==3 || t==6){
             printf("1");
            for(int i=0;i<n-2;i++){
                printf("0");
            }
            printf("2");
        }
        else if(t==9){
            printf("1");
            for(int i=0;i<n-2;i++){
                printf("0");
            }
            printf("8");
        }
        else{
            printf("7");
            for(int i=0;i<=n-2;i++)
            {
                printf("0");
            }
        }
    }
}