#include<stdio.h>
int main(){
    int s, n;
    scanf("%d %d",&s,&n);
    int arr[n];
    while(n--){
        int count = 0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
for(int i=0;i<n;i++){
if(s>=arr[i]){
    s = s+arr[1];
    count++;
}
}

if(count==n){
    printf("YES \n");
    return 0;
}
else{
    printf("NO \n");
    }
}
}
