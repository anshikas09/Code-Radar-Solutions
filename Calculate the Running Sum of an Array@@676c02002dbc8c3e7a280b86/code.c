#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum[n];
    for(int i=0;i<n;i++){
        sum[i]=sum[i]+arr[i];
    }
    for(int i=0;i<n;i++){
        printf("%d",sum[i]);
    }
    return 0;
}