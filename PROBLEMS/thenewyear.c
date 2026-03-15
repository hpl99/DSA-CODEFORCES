#include<stdio.h>
#include<stdlib.h>
int main(){
    int a , b, c;
    scanf("%d %d %d ",&a,&b,&c);
    // int x = abs(a-b);
    // int y = abs(a-c);
    // int u = abs(b-a);
    // int h = abs(b-c);
    // int g = abs(c-a);
    // int r = abs(c-b);
    int max = 0,min = 0;
    if(a>b && a>c){
        max =a;
    }
    if(b>a && b>c){
        max = b;
    }
    if(c>a && c>b){
        max = c;
    }
    if(a<b && a<c){
        min = a ;
    }
    if(b<a && b<c){
        min = b;
    }
    if(c<a && c<b){
        min = c;
    }
    int ans = (max + min)/2;
    max = (max -ans);
    min = abs(min -ans) ;
    printf("%d",min+max);
}