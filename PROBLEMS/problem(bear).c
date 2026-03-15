#include<stdio.h>
int main(){
    int a , b ;
    scanf("%d %d",&a,&b);
    int limak=a;
    int bob=b;
    while(1){
        for(int i=1;;i++){
            limak=limak*3;
            bob=bob*2;
            if(limak>bob){
                printf("%d",i);
                return 0;
            }
        }
    }

}