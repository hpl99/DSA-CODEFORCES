#include<stdio.h>
int main(){
    int n;
    int count=0;
    int count1=0;
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            count+=i;
            count1++;
        }
        if(count>n){
            printf("%d",count1-1);
            return 0;
        }
    }

}