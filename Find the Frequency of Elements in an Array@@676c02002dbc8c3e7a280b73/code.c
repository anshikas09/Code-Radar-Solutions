// #include<stdio.h>
// void Countfrequency(int arr[],int n){
//     int visited[n];
//     for(int i=0;i<n;i++){
//         if(visited[i]==1){
//             continue;
//         }
    
//     int count=1;
    
//         for(int j=i+1;j<n;j++){
//             if(arr[i]==arr[j]){
//                 count++;
//                 visited[j]=1;
//             }
//         }
//      printf("%d %d\n",arr[i],count);   
//     }
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     int visited[n];
//     for(int i=0;i<n;i++){
//         visited[i]=0;
//     }
//     Countfrequency(arr,n);
//     return 0;
// }


#include<stdio.h>
void Countfre(int arr[],int n){
    int visited=-1;
    int j;
    for(int i=0;i<n;i++){
        int count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                arr[j]=visited;
            }
             if(arr[j]!=visited){
            arr[i]=count;
        }
        }
        printf("%d %d ",arr[i],count);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int visited[n];
    for(int i=0;i<n;i++){
        visited[i]=0;
    }
    Countfre(arr,n);
    return 0;
}