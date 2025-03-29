// int findKthMissing(int arr[],int n,int k){
//     int missing_count=0,prev=0;
//     for(int i=0;i<n;i++){
//         int current=arr[i];
//         missing_count+=current-prev-1;
//         if(missing_count>=k){
//             return current-(missing_count-k)-1;
//         }
//         prev=current;
//     }return arr[n-1]+(k-missing_count);
// }

int findKthMissing(int arr[],int n,int k){
    for(int i=0;i<n-1;i++){
        if(arr[i]<=k){
            k++;
        }else{
            break;
        }
    }
    return k;
}