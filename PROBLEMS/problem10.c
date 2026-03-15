#include<stdio.h>
int main(){
    int a[5][5];
    int x = 3;
    int y = 3;
    int z,c;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            scanf("%d",&a[i][j]);
            if(a[i][j]==1){
               z=abs(i-x);
               c=abs(j-y);
               printf("%d",z+c); 
            }
        }
    }
    return 0;
}