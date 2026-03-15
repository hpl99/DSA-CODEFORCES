#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d %d",&n,&m);
        int a[n],b[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d %d",&a[i],&b[i]);
        }
        int init= 0;
        int count = 0;
        for(int i=0;i<m;i++)
        {
            count++;
            if(b[i]!=init)
            {
                count = count-1;
            }
        }
        printf("%d\n",count);
    }
}