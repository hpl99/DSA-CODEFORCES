#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int b[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&a[i],&b[i]);
    }
    int count = 0;
    for(int i= 0;i<n;i++)
    {
        if(a[i]==i || b[i]==i){
            continue;
        }
        else{
            count++;
        }
    }
    if(count==1){
        printf("I become the guy.\n");
    }
    else{
        printf("Oh, my keyboard!\n");
    }
}