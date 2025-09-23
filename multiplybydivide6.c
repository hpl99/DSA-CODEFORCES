#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int temp =n;
        int count =0;
        while(n!=0)
        {
            temp = n%10;
            count+=temp;
            n=n/10;
        }
        int x = 0;
        if(count%3==0)
        {
            x=n;
        }
        else
        {
            printf("-1");
            break;
        }
        int count1=0;
        int u = x;
        while(u==1)
        {
        if(x%6==0)
        {
            u=x/6;
            count1++;
        }
        else
        {
            u=x*2;
            count1++;
            int y =u%2;
            if(u==0 && u%2==0 )
            {
                count1 =0;
                break;
            }
        }
    }
    printf("%d\n",count1);
  }
}
/*here first check if sum of elements of num % 3==0 then in loop if divided by 6 then enter
and n%2==0 and again n%2==0  it its ==0 then stop and return count  */