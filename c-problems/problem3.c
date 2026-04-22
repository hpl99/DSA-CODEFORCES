#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
   int font = 0;
  for(int i=0;i<n;i++){
    int arr[3];
    int count = 0;
    for(int j=0;j<3;j++){
        scanf("%d",&arr[j]);
    if(arr[j]==1){
        count++;
    }
}
        if(count >= 2){
            font++;
        }
    
  
}
printf("%d \n",font);
return 0;
  
}