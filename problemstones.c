#include<stdio.h>
#include<string.h>
int main(){
    int n ;
    scanf("%d",&n);
    char s[n];
    for(int i=0;i<=n;i++){
        scanf("%c",&s[i]);
    }
    int count = 0;
        for(int i=0;i<=n;i++){
            if(s[i]==s[i+1]){
                count++;
            }
    }
    printf("%d",count);
}
