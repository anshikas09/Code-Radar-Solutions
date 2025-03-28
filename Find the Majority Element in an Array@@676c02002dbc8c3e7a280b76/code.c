#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int candidate=-1,count=0;
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    int majority=n/2;
    for(int i=0;i<n;i++){
        if(count==0){
            candidate=arr[i];
            count=1;
        }else if(arr[i]==candidate){
            count++;
        }else{
            count--;
        }
    }
    count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==candidate){
            count++;
        }
    }
    if(count>majority){
    printf("%d ",candidate);
   }else{
    printf("-1");
   }
   return 0;
}
    
  