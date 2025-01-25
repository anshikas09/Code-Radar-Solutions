#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int i=n;i>=0;i--){
        for(int j=i;j<=n-1;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}