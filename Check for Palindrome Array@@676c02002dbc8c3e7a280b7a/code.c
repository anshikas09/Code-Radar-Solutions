#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
    scanf("%d",&arr[n]);
    }
    for(i=0,j=n-1;i<j;i++,j--){
        if(arr[i]!arr[j]){
            printf("NO");
            break;
        }
    }
    if(i>j){
        printf("YES");
    }
}