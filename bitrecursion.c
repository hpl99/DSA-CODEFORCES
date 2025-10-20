#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a , b,c;
        scanf("%d %d %d",&a,&b,&c);
        if(a%2==0 && b%2==0 && c%2==0){
            printf("no\n");
        }
        else{
            printf("yes\n");
        }
    }
}