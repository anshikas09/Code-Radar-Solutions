#include<stdio.h>
void SecondLarge(int arr[],int n){
    int max1,max2;
    if(arr[0]>arr[1]){
        max1=arr[0];
        max2=arr[1];
    }if(arr[0]<arr[1]){
        max1=arr[1];
        max2=arr[0];
    }
    for(int i=2;i<n;i++){
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
        }else if(arr[i]>max2 && arr[i]<max1){
            max2=arr[i];
        }else{
            printf("-1");
        }
    }
    printf("%d",max2);
}
int main(){
    int n;
    scanf("%d ",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    SecondLarge(arr,n);
    return 0;
}