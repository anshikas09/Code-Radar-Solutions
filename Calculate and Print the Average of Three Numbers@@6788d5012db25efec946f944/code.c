#include <stdio.h>
int main() {
    int a,b,c;
    float avg;
    scanf("%d %d %d",&a,&b,&c);
    avg=(a+b+c)/3;
    printf("Average: %.2f\n",avg);
    return 0;
}