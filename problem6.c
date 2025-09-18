#include<stdio.h>
#include<string.h>
int main(){
    long long n;
    scanf("%lld",&n);
    char c[4];
    
    long long count = 0;
    for(long long i=0;i<n;i++){
        scanf("%s",c);
        if(strcmp(c,"X++")==0 || strcmp(c,"++X")==0){
            count = count +1;
        }
        else if(strcmp(c,"--X")==0 || strcmp(c,"X--")==0){
            count = count-1;
        }
    }
    printf("%lld",count);
    
    
return 0;
}