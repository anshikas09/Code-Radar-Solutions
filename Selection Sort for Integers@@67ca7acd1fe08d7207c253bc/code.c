void selectionSort(int arr[],int n){
    int i,j,minIndex,temp;
    for(int i=0;i<n-1;i++){
        minIndex=i;
        for(int j=0;j<n-i-1;j++){if(arr[j]<arr[minIndex]){
            minIndex=j;
        }}
        if(minIndex!=i){
            temp=arr[i];
            arr[i]=arr[minIndex];
            arr[minIndex]=temp;
        }
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}