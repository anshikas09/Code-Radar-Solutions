#include <stdio.h>
int main() {
    int n1,n2;
    char so;
    scanf("%d %d %d",&n1,&n2,&so);
    switch(so){
        case '+': printf("%d",n1+n2); break;
        case '-': printf("%d",n1-n2); break;
        case '*': printf("%d",n1*n2); break;
        case '/': if(n2!=0){printf("%d",n1/n2);} else{printf("error\n");} break;
        default: printf("\n");
    }
    return 0;
}