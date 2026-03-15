#include<stdio.h>
#include<string.h>
int main(){
    char cc[100];
    printf("enter");
    for(int i=0;i<100;i++){
    scanf("%c",&cc[i]);
    }
    int count = 0;
    for(int i=0;i<100;i++){
        for(int j=i+1;j<100;j++){
            if(cc[i]==cc[j]){
                count++;
            }
        }
    }
    printf("%d",count);
    int x ;
    x = strlen(cc);
    int y ;
    y = x - count;
    if(y%2==0){
        printf("CHAT WITH HER!");
    }
    else{
        printf("IGNORE HIM!");
    }
}