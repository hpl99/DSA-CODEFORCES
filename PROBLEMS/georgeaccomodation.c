#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[100][100];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        scanf("%d",&arr[i][j]);
    }
}
int count = 0;
for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        if((arr[i+1][j+1]-arr[i][j]>=2))
        {
            count++;
        }
    }
}
printf("%d",count);
}