#include<stdio.h>
int main(){
    long long  n,m,a;
    scanf("%lld %lld %lld",&n,&m,&a);
    long long  x , y,z;
    x = n*m;
    y = a*a ;
    z=x/y;
    if(n==m && n==a){
        printf("%lld",a);
    }
    else if(x%y==0){
        printf("%lld",z);
    }
    else if(z!=0){
            for(long long  i=1;i<=n;i++){
            if(a*i>=n){
                for(long long j=1;j<=m;j++){
                    if(a*j>=m){
                        printf("%lld\n",i*j);
                        return 0;
                    }
                }
            }
         }
         
    }
    else{
       long long i,j;
         for(  i=1;i<=n;i++){
            if(a*i>=n){
                break;
            }
        }
                for( j=1;j<=m;j++){
                    if(a*j>=m){
                       break;;
                    }
                }
            printf("%lld",i*j);
    }
   return 0 ;
}