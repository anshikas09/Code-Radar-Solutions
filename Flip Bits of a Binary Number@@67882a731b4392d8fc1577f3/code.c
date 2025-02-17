#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    int flip= ~num;
    printf("%d\n",flip);
    return 0;
}