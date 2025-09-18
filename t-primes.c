#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    long long arr[n];
    for(int i=0;i<n;i++){
        scanf("%lld",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        int count = 0;
        for(long long j=1;j<=arr[i];j++)
        {
            if(arr[i]%j==0)
            {
                count++;
            }
        }
        if(count == 3){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}