#include<stdio.h>
int main(){
    int n ;
    scanf("%d",&n);
    while(n--){
        int x;
         int count = 0;
        scanf("%d",&x);
        int arr[5]={2,3,5,7,11};
        for(int i=0;i<5;i++)
        {
            if(x%arr[i]==0 && arr[i]!=x){
                count++;
            }
        }
         if(count==1)
          {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        }  
    }