#include <stdio.h>
int main() {
    int angle1,angle2,angle3;
    scanf("%d %d %d",&angl1,&angle2,&angle3);
    int sum=angle1+angle2+angle3;
    if(sum==0 && angle1>0 && angle2>0 && angle3>0){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}