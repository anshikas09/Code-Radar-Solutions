#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    char st[n+1];
    scanf("%s",st);
    int len = strlen(st);
    int count=0;
    for(int i=0;i<len;i++){
        count++;
    }
    printf("%d\n",count);
}