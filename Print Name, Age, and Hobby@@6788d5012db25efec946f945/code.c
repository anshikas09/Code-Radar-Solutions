#include <stdio.h>
int main() {
    char name[50];
    char hobby[50];
    int age;
    scanf("%49s",name);
    scanf("%d",&age);
    scanf("%[^\n]",hobby);
    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("Hobby:%s\n",hobby);
    return 0;
}