#include<string.h>
void selectionSort(char arr[][100],int n){
    int minIndex; char temp[100];
    for(int i=0;i<n-1;i++){
        minIndex=i;
        for(int j=i+1;j<n;j++){
            if(strcmp(arr[j],arr[minIndex])<0){minIndex=j;}
        }
        if(minIndex!=i){
            strcpy(temp,arr[i]);
            strcpy(arr[i],arr[minIndex]);
            strcpy(arr[minIndex],temp);}}}
void printArray(char arr[][100],int n){
    for(int i=0;i<n;i++){
        printf("%s ",arr[i]);}
        printf("\n");
}