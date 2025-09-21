#include<stdio.h>
#include<stdlib.h>
int main(){
    int t ;
    scanf("%d",&t);
    while(t--){
        int a,b;
        scanf("%d %d",&a,&b);
        if(abs(a-b)==1){
            printf("N\n");
        }
        else if(a==5||a==3){
            printf("Y\n");
        }
        else if(b==5||b==3){
            printf("Y\n");
        }
        else if(a%2==0||a%3==0||a%4==0||a%5==0){
            printf("N\n");
        }
         else if(b%2==0||b%3==0||b%4==0||b%5==0){
            printf("N\n");
        }
        else {
            printf("Y\n");
        }
    }
}