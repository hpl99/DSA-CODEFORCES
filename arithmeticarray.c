#include<stdio.h>
#include<stdlib.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int arr[n];
        int sum = 0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
            sum+=arr[i];
        }
        if(sum<0)
        {
           printf("1\n");
        }
        else{
       int count = abs(sum-n);
       printf("%d\n",count);
        }
    }
}