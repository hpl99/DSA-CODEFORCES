#include<stdio.h>
int main(){
    int n,h;
    scanf("%d %d",&n,&h);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]>h){
            count+=2;
        }
        else{
            count+=1;
        }
    }
    printf("%d",count);
}