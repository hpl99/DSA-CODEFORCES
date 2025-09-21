#include<stdio.h>
int main(){
    int t ;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int count = 0;
        int count1=0;
        if(n<=10){
            printf("%d\n",n);
        }
        else{
            // if(n==11){

            //     printf("10\n");
            // }
        for(int i=11;i<n;i++)
        {
            int temp = i;
            while(temp!=0){
            count = temp%10;
            temp=temp/10;
            if(count==temp%10)
            {
                count1++;
            }
           }
        }
         printf("%d\n",count1+9);
      }
    }
}