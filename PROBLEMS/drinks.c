#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    float count = 0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        count+=arr[i];
    }
    printf("%4f",count/n);
}