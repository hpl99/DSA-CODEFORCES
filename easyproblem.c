#include<stdio.h>
int main(){
    int n;
    int found = 0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]==1){
            printf("HARD");
            found = 1;
            return 0;
        }
    }
    if(!found){
        printf("EASY");
    }

}