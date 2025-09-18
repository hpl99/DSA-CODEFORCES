#include<stdio.h>
#include<string.h>
#define MAX 100
int main(){
    char c[MAX];
    for(int i=0;i<MAX;i++){
        scanf("%c",&c[i]);
    }
     int x = strlen(c);
    for(int i=0;i<x;i=i+2){
        int temp = 0;
        if(c[i]>c[i+2]){
            temp = c[i];
            c[i] = c[i+2];
            c[i+2]=temp;
        }
    }
    for(int i=0;i<x;i++){
        printf("%c",c[i]);
    }
    return 0;
}