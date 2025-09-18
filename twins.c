#include<stdio.h>
int main(){
    int n ;
    scanf("%d",&n);
    int arr[n];
    int max = arr[0];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(i>1 && arr[i]>max)
        {
            max = arr[i];
        }
    }
    int x = 0;
    int count = 0;
    for(int i=0;i<n;i++){
        count = arr[n-1]+arr[i];
        x+= arr[i]+arr[i+2];
         if(count<x)
        {
            x=x-arr[i];
        }
        else if(count>x){
            printf("%d",i+2);
        }
    }
    return 0;
}