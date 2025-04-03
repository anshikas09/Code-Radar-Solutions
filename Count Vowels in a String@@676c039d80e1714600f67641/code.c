#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    char str[n+1];
    scanf("%s",str);
    int len = strlen(st);
    it count=0;
    for(int i=0;i<=len;i++){
        if(st[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||st[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            count++;
        }
    }
    printf("%d\n",count);
}