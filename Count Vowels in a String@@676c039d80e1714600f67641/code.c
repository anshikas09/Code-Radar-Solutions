#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    char st[n+1];
    scanf("%s",st);
    int len = strlen(st);
    int count=0;
    for(int i=0;i<=len;i++){
        if(st[i]=='a'||st[i]=='e'||st[i]=='i'||st[i]=='o'||st[i]=='u'||st[i]=='A'||st[i]=='E'||st[i]=='I'||st[i]=='O'||st[i]=='U'){
            count++;
        }
    }
    printf("%d\n",count);
}