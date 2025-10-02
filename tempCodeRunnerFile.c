#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n%2==0 && n%4!=0){
        printf("4");
    }
    else if(n%3==0 && n%1!=0){
        printf("2");
    }
    else if(n%4==0){
        printf("8");
    }
    else{
        printf("6");
    }
}