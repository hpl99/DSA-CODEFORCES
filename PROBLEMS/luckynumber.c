#include<stdio.h>
int main(){
    long long n ; 
    int count = 0;
    scanf("%lld",&n);
    while(n!=0){
        int c = 0;
        c = n%10;
      
        if(c == 4|| c== 7){
            count++;
        }
          n= n/10;
    }
    if(count== 4|| count==7)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}