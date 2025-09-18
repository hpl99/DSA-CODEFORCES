#include<stdio.h>
#include<string.h>
#define MAX 100
int main(){
    
    char str1[101], str2[101];

    fgets(str1, sizeof(str1), stdin);  
    fgets(str2, sizeof(str2), stdin);
    if(stricmp(str1,str2)==0){
        printf("0");
    }
    else if(stricmp(str1,str2)<0){
        printf("-1");
    }
    else{
        printf("1");
    }
    return 0;
}