#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    char st[n+1];
    fgets(st,sizeof(st),stdin);
    scanf("%s",st);
    int length=0;
    while(st[length]!=0'\0' && st[length]!='\n'){
        length++;
    }
    printf("%d\n",length);
    return 0;
}