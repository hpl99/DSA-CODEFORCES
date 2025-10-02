#include<stdio.h>
int main(){
    char s[100];
    scanf("%s",s);
    for(int i=0;i<98;i++){
        for(int j=i;j<98;j++){
            int tempp = 0;
        if(s[j]>s[j+2])
        {
            tempp = s[j];
            s[j]=s[j+2];
            s[j+2]=tempp;
        }
     }
   }
   printf("%c",s[0]);
}