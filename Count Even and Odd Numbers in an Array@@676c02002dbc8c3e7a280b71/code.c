#include<stdio.h>
void CountEvenOdd(int arr[],int n){
    int ce=0;
    int co=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            ce++;
        }else{
            co++;
        }
    }
    printf("%d ",ce);
    printf("%d ",co);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    CountEvenOdd(arr,n);
    return 0;
}