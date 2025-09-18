#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[100];
    int upper=0 , lower=0;
    scanf("%s",str);
    for(int i = 0;str[i]!='\0';i++){
        if(isupper(str[i])){
            upper ++ ;
        }
        else if(islower(str[i])){
            lower ++;
        }
    }
    if(upper>lower){
         for (int i = 0; str[i] != '\0'; i++) 
         {
        str[i] = toupper(str[i]);
      }
    }
     else {
         for (int i = 0; str[i] != '\0'; i++) 
         {
        str[i] = tolower(str[i]);
    }
}
printf("%s",str);
    return 0;
}