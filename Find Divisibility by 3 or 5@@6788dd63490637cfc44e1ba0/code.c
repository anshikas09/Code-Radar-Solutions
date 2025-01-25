#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    if(num%3==0){printf("Divisible by 3");}
    else if(num%5==0){printf("Divisible by 5");}
    else{printf("Divisible by Both");}
    return 0;
}