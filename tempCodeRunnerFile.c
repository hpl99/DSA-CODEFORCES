#include<stdio.h>
int main(){
    int t,s;
    scanf("%d %d",&t,&s);
       int arr[t][1];
       for(int i=0;i<t;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&arr[i][j]);
        }
       } 
       int count = 0;
       int count1= 0;
       for(int i=0;i<t;i++){
        for(int j=0;j<2;j++){
            if(arr[0][1]>arr[i][1]){
                count+=arr[i][2]+arr[i+1][2];
                count1++;
            }
            else{
                printf("NO");
                return 0;
            }
        }
        if(count==t){
            printf("YES");
        }
       }
    }