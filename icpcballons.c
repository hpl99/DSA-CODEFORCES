#include<stdio.h>
int main(){
    int t ;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        char s[n];
        scanf("%s",n);
        int count = 0;
        int count1 = 0;
        int j = 0;
        int arr[n];
        for(int i=0;i<n;i++){
            for(j=0;j<n-1;j++){
            if(s[j]!=s[i])
            {
            count++;
            }
            else
            {
                count1++;
            }
        }
        arr[i]= count1;
    }
        if(count1==0)
        {
            printf("%d",2*count);
        }
        else{
            for(int i=0;i<n;i++){
                int x = 0;
                x = 2 + 1*arr[i];
                printf("%d",x);
            }
        }
    }
}