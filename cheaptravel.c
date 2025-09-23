#include<stdio.h>
int main(){
    int n ,m ,a,b ;
    scanf("%d %d %d %d",&n,&m,&a,&b);
    /*
    n = no of rides to be completed
    a = price of one ride ticket 
    b = price of discount ticket 
    m = no of rides for b 
    */
   int count = 0;
   int count1= 0;
   for(int i=1;i<=n;i++)
   {
    int  x = n%m;
    int amount = (n/m)*b;
    int y = x*a;
    int count = amount + x;
   }
      for(int i=1;i<=n;i++)
      {
    int  x = n%a;
    int amount = (n/a)*a;
    int y = x*a;
    int count1 = amount + x;
   }
   if(count1>count)
   {
    printf("%d",count1);
    return 0;
   }
   else if(count1<count)
   {
    printf("%d",count);
    return 0;
   }
   else
   {
    printf("%d",count1);
    return 0;
   }
   return 0;
}