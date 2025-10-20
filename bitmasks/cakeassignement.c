#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int k,x;
        scanf("%d %d",&k,&x);
        if(2^k==x){
            printf("0");
        }
        int count = 0;
        for(int i=0;i<2^k;i++){
            int n = 0;
            x+=(2^k)/2;
            int y =y+n/2;
            count++;
            if(y==x){
                break;
            }
        }
    }
}