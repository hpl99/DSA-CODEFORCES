#include<stdio.h>
int main(){
    int t ;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int x=0;
        int y=0;
        x=(n/2)+1;
        y=n-x;
        printf("%d\n",y);
    }
}