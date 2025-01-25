#include <stdio.h>
int main() {
    float n1,n2;
    char so;
    scanf("%f %f %c",&n1,&n2,&so);
    switch(so){
        case '+': printf("%.0f",n1+n2); break;
        case '-': printf("%.0f",n1-n2); break;
        case '*': printf("%.0f",n1*n2); break;
        case '/': if(n2!=0){printf("%.0f",n1/n2);} else{printf("error\n");} break;
        default: printf("\n");
    }
    return 0;
}