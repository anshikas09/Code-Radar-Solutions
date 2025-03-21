#include<stdio.h>
void insertionSort(char arr[],int n){
    int j;
    for(int i=1;i<n;i++){ //start from 2nd element 
        char key=arr[i]; //store the current element 
        j=i-1;
        //shift elements of arr that are greater than key to one position ahead thier current position
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j]; //shifts element to right
            j--;
        }
        arr[j+1]=key; //place the key in its correct position
    }
}
void printArray(char arr[],int n){
    for(int i=0;i<n;i++){
        printf("%c ",arr[i]);
    }printf("\n");
}