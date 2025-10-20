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
        int count = 0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(j>i){
                    int x = arr[i]&arr[j];
                    int y = arr[i]^arr[j];
                    if(x>=y)
                    {   
                        count++;
                    }
                }
            }
        }
        printf("%d \n",count);
    }
}