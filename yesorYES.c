#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
    char s[4];
    scanf("%s",s);
    // 121 89
    // 69 101 
    //83 115
    int count = 0;
    if(s[0]==121 || s[0]==89){
        count++;
    }
    if(s[1]==69 || s[1]==101){
        count++;
    }
    if(s[2]==83 || s[2]==115){
        count++;
    }
    if(count==3){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
  }
}