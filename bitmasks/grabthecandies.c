#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int max = 0;
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
            // if(arr[i]>max)
            // {
            //     max = arr[i];
            // }
        }
        int count = 0;
        int count1 = 0;
        for(int i=0;i<n;i++)
        {
            if( (arr[i]&1)==0)
            {
                count+=arr[i];
            }
            else{
                count1+=arr[i];
            }
        }
        if(count>count1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}