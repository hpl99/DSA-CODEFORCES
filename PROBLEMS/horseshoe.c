#include<stdio.h>
int main(){
    int arr[4];
        scanf("%d",&arr[0]);
        scanf("%d",&arr[1]);
        scanf("%d",&arr[2]);
        scanf("%d",&arr[3]);
        int count = 0;
        for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
    }
    printf("%d",count-1);
}