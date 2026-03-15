#include<stdio.h>
int main(){
    int k , n ,w;
    int count= 0;
    scanf("%d %d %d",&k,&n,&w);
    for(int i=1;i<=w;i++){
        int tcost= 0;
        tcost= k*i;
        count = count  + tcost;
    }
    int mreq= count - n;
    if(mreq==0 || mreq<0){
        printf("0");
    }
    else{
        printf("%d",mreq);
    }
}