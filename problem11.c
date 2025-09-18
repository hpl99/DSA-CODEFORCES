#include<stdio.h>
int main(){
    int a , b ,c;
    scanf("%d %d %d",&a, &b,&c);
    int m,n,o,p,q,r;
    m=a+b*c;
    n=a*(b+c);
    o=a*b*c;
    p=(a+b)*c;
    q=(a*b)+c;
    r=a+b+c;
    if(m>n && m>o && m>p && m>q && m>r){
        printf("%d",m);
    }
    else if(n>=m && n>=o && n>=p && n>=q && n>=r){
        printf("%d",n);
    }
    else if(o>m && o>n && o>p && o>q && o>r){
        printf("%d",o);
    } 
    else if(p>m && p>n && p>o && p>q && p>r){
        printf("%d",p);
    }
    else if(q>m && q>n && q>o && q>p && q>r){
        printf("%d",q);
    }
    else{
        printf("%d",r);
    }
    return 0;
}