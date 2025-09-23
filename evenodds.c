#include<stdio.h>
int main(){
    int n ,k;
    scanf("%d %d",&n,&k);
    int even = 0 , odd = 0;
    if(n%2==0){
        even = n/2;
        odd = n/2;
    }
    else if(n%2==1){
       odd= (n/2)+1;
       even = n/2; 
    }
    int count = 0;
    if(k<=odd){
        for(int i=2;i<=k;i=i+2){
                 count += i;
        }
    }
    else{
        for(int i=1;i<=k;i=i+2){
                 count += i;
        }
    }
    printf("%d",count);
}