#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n;
        scanf("%lld",&n);
        int count =0;
        for(int i=2;i<10;i++){
            if(n%i==0)
            {
                count++;
            }
        }
        if(count==0){
            printf("YES\n");
        }
        else if(n%3==0 || n%5==0 || n%7==0 ){
            printf("YES\n");
        }
        else 
        {
            printf("NO\n");
        }
    }
}