#include<stdio.h>
int main(){
    int n;
    int j=0;
    scanf("%d",&n);
    char st[n];
    scanf("%s",st);
    for(int i=0;st[i]!='\0';i++){
        char result[j++]=result[j]+st[i];
    }
    result[j]='\0';
    printf("%s",result);
}