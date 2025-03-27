#include<stdio.h>
void Countfrequency(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        printf("%d %d\n",arr[i],count);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    Countfrequency(arr,n);
    return 0;
}