#include<stdio.h>
int main(){
    int t ;
    scanf("%d",&t);
    while(t--){
        long long n;
        scanf("%lld",&n);
        long long arr[n];
        for(int i=0;i<n;i++){
            scanf("%lld",&arr[i]);
        }
        int found = 0;
        long long count = 0;
                for(int i=0;i<n;i++)
                {
            if(arr[i]%2==1)
            {
                count+=arr[i];
                found=1;
            }
            else{
                found= 0;
            }
            if(found){
                if(arr[i]%2==0){
                    count+=arr[i];
                }
            }
            else{
                continue;
            }
        }
     
        printf("%lld\n",count);
    }
    return 0;
    }