#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    char st[n+1];
    scanf("%s",st);
    printf("%d",strlen(st));
    return 0;
}