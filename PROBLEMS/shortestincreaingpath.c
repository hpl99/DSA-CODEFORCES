#include<stdio.h>
int main(){
    int t ;
    scanf("%d",&t);
    while(t--){
        int x  , y;
        scanf("%d %d",&x,&y);
           int k = x-y;
        if(x==y){
            printf("-1\n");
        }
        else if(y>x){
            printf("2\n");
        }
        else if(y==1 && x>1){
            printf("-1\n");
        }
        else if(x==1 && y>1){
            printf("2");
        }
        else if(k==1)
        {
            printf("-1\n");
        }
         else if(x>y){
            printf("3\n");
        }
    }
}