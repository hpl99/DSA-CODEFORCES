#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int arr[n];
        int count = 0;
        int count1=0;
        int final=0;
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
            if(arr[i]==-1){
                count++;
            }
            if(arr[i]==0){
                count1++;
            }
        }
        if(count%2==1)
        {
            printf("%d\n",2+count1);
        }
        else{
            printf("%d\n",1*count1);
        }

    }
    return 0;
}