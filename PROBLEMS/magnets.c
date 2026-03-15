#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count = 0;
    int count1=0;
    for(int i=0;i<n;i++){
        if(arr[i]==10){
            count++;
        }
        else{
            count1++;
        }
    }
    
}