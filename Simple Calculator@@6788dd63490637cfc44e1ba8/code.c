#include <stdio.h>
int main() {
    int n1,n2;
    char so;
    scanf("%d %d %c",&n1,&n2,&so);
    switch(so){
        case '+': printf("%d",n1+n2); break;
        case '-': printf("%d",n1-n2); break;
        case '*': printf("%d",n1*n2); break;
        case '/': printf("%d",n1/n2); break;
        default: printf("\n");
    }
    return 0;
}