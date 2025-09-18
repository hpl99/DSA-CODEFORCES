#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n][1];
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int max = 0;
    int count = 0;
    int rem = 0;
    int fin= 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            count = arr[i][j+1]-arr[i][j];
            rem+= arr[i+1][1]-arr[i][1];
            fin = arr[i][2]+rem;
            if(fin>max){
                max= fin;   
            }
        }
    }
    printf("%d",fin);
}