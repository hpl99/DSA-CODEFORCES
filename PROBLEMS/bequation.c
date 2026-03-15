#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    float a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    float x=00 ,y=0;
    if(a!=0)
    {
     x = -b+(pow(b*b-4*a*c , 1/2))/2*a ;
     y =  -b-(pow(b*b-4*a*c , 1/2))/2*a ;
    }
   if(x!=y && x!=INFINITY && y!=INFINITY)
    {
       printf("2\n");
       printf("%5f %5f",x,y);
        }
    else if((x&&y)==0){
        printf("0");
    }
    else{
        printf("-1");
    }
}