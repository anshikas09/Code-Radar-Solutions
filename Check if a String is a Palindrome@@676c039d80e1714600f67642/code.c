#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    char st[n+1];
    scanf("%s",st);
    int len=strlen(st);
    char result[len+1];
    result[len]='\0';
    for(int i=0;i<len;i++){
        result[i]=st[len-1-i];
    }
    if(strcmp(result,st)==0){
        printf("Yes\n");
    }else{
        printf("No\n");
    }return 0;
}