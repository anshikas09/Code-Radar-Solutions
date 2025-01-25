#include <stdio.h>
int main() {
    int n1,n2;
    char so;
    scanf("%d %d %c",&n1,&n2,&so);
    switch(so){
        case '+':printf("%d",n1+n2); break;
        case '-':if(n1>n2){printf("%d",n1-n2);}else{printf("\n");} break;
        case '*':printf("%f",n1*n2); break;
        case '/':if(n2!=0){printf("%d",n1/n2);} else{printf("\n");} break;
        default: printf("\n");
    }
    return 0;
}