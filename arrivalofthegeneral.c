#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max = 0;
    int min = 0;
    for(int i=0;i<n;i++){
         if(arr[i]>=max){
            max = arr[i];
         }
    }
    for(int i=0;i<n;i++){
        if(arr[i]<=max){
            min = arr[i];
        }
    }
    int c = 0;
    int y = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==max){
            c= i;
        }
        else if(arr[i]==min){
            y = i;
        }
    }
    int high = c-0;
    int low = (n-1)-y;
    printf("%d",high+low);
}