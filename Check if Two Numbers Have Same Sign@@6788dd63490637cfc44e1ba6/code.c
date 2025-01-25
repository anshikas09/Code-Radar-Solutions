#include <stdio.h>
int main() {
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    if(n1>0 && n2>0){printf("Same Sign");}
    else if(n1<0 && n2<0){printf("Same Sign");}
    else{printf("Different Sign");}
    return 0;
}