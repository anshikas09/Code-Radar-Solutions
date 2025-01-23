#include <stdio.h>
int main() {
    char name[50];
    char hobby[50];
    int age;
    scanf("%s",name);
    scanf("%d",&age);
    scanf("%s",hobby);
    printf("Name: %s",name);
    printf("Age: %d",age);
    printf("Hobby: %s",hobby);
    return 0;
}