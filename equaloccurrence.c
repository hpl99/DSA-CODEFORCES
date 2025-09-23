#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        int count1[n];
        int count = 0;
        for(int i=0;i<n-1;i++){
            if(arr[i]==arr[i+1])
            {
                count++;
            }
            count1[i]==count;
        }
        printf("%d",count1[0]);
    }
}