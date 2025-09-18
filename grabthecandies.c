#include<stdio.h>
int main(){
    int t ;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        int max=0;
        for(int i=0;i<n;i++){
            if(arr[i]>max){
                max =arr[i];
            }
        }
        int mia=0,bia=0;
        for(int i=0;i<n-1;i++){
            mia = max;
            if(arr[i]%2==0){
                mia+=arr[i];
            }
            else{
                bia+=arr[i];
            }
        }
        if(mia>bia){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}