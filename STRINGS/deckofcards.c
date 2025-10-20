#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k;
        scanf("%d %d",&n,&k);
        char s[n];
        scanf(" %s",s);
        int count = 0;
        int count1 = 0;
        int x = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                count++;
            }
            else if(s[i]=='1'){
                count1++;
            }
            else{
                x++;
            }
        }
         for(int i=0;i<n;i++){
            if(i<count){
                printf("-");
            }
            else if(i>=count && i<n-count1 && x!=0) 
            {
                printf("+");
            }
            else if(i>=n-count1)
            {
                while(count1)
                {
                    printf("-");
                    count1--;
                }
            }
         }
    }
}