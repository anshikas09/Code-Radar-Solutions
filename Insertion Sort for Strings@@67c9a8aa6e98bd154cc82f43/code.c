#include<stdio.h>
#include<string.h>
void insertionSort(char arr[][100],int n){
    int j;
    for(int i=1;i<n;i++){
        char* key =arr[i];
        j=i-1;
        while(j>=0 && strcmp(arr[j],key)>0){
            arr[j+1] = arr[j];
            j--; 
        }
        arr[j+1] = key;
    }
}
void printArray(char arr[][100],int n){
    for(int i=0;i<n;i++){
        printf("%s ",arr[i]);
    }printf("\n");
}