#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if(c==a+b){
            printf("+\n");
        }
        else{
            printf("-\n");
        }
    }
}