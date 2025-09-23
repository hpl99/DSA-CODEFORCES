#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int b[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&a[i],&b[i]);
    }
    int count = 0;
    int arr[n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((a[i]||b[j])!=j){
                count++;
            }
        }
    }
    if(count==0){
        printf("I become the guy.\n");
    }
    else{
        printf("Oh, my keyboard!\n");
    }
}