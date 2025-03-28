#include<stdio.h>
int main(){
    int n;
    scanf("%d ",&n);
    int t;
    scanf("%d",&t);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]==t){
            printf("%d", i+1);
            break;
        }
        
    }
    return 0;
}