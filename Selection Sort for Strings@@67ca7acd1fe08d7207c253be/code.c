void selectionSort(char* arr[],int n){
    int minIndex; char* temp;
    for(int i=0;i<n-1;i++){
        minIndex=i;
        for(int j=i+1;j<n;j++){
            if(strcmp(arr[j],arr[,minIndex])<0){minIndex=j;}
        }
        if(minIndex!=i){
            temp=arr[i];
            arr[i]=arr[minIndex];
            arr[minIndex]=temp;}}}
void printArray(char* arr[],int n){
    for(int i=0;i<n;i++){
        printf("%s ",arr[i]);}
        printf("\n");
}