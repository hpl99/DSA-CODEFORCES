#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k;
        scanf("%d %d",&n,&k);
        int count = 0;
        int x = 0;
        for(int i=0;;i++){
            x=i%n;
            count++;
            if(x==0){
                count-=1;
            }
            if(count==k){
                printf("%d",i);
                break;
            }
        }
    }
}