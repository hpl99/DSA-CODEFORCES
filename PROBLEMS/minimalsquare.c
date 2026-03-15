#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int l=0;
        int b=0;
        int count = 0;
        for(int i=1;;i++){
        count = 2*l*b;
        if(i*i>count){
            printf("%d",i*i);
        }
        }
    }
}