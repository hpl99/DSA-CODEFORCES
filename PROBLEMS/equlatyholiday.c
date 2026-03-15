#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    long arr[n];
    for(int i=0;i<n;i++){
        scanf("%ld",&arr[i]);
    }
   long max = arr[0];
   for(int i=1;i<n;i++){
    if(arr[i]>max)
    {
        max=arr[i];
    }
   }
    long count = 0;
    for(int i=0;i<n;i++)
    {
        count+=max-arr[i];
    }
    printf("%ld",count);
}