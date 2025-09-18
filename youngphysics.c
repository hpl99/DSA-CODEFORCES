#include<stdio.h>
int main(){
    int n;
    int m=3;
    scanf("%d",&n);
    int arr[n][m];
    for(int i=0;i<n;i++){
     for(int j=0;j<m;j++){
        scanf("%d",&arr[i][j]);
     }
    }
       int count = 0;
     for(int i=0;i<n;i++){
     
        for(int j=1;j<m;j++){
            count = count + arr[i][j-1]+arr[i][j];
      }
    }
       if(count==0){
        printf("YES\n");
      }
      else{
        printf("NO\n");
      }
}
