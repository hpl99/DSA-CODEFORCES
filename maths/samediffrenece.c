#include<stdio.h>
int main(){
    int t ;
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
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n-2;j++){
            if(arr[i]-arr[j]==j-i){
                count++;
            }
        }
    }
    printf("%d",count);
    }
}