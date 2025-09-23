#include<stdio.h>
int main(){
    int str;
    int t;
    scanf("%d %d",&str,&t);
    int  max = 0;
      int s1,bonus;
    while(t--){
      
        scanf("%d %d",&s1,&bonus);
        if(str>s1){
            max = str;
        }
    }
    int count = 0;
    while(t--){
        if(max>=s1){
            count = 0;
        }
        else{
            count++;
        }
    }
}