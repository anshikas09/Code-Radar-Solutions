#include <stdio.h>
int main() {
    int a,b,c;
    double avg;
    scanf("%d %d %d", &a,&b,&c);
    avg=(a+b+c)/3;
    printf("Average: %.2lf\n",avg);
    return 0;
}