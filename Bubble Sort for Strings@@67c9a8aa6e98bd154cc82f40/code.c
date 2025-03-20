#include <stdio.h>
#include <string.h>
// Function to perform bubble sort on an array of strings
void bubbleSort(char arr[][100], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            // Compare adjacent strings
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                // Swap the strings if they are in the wrong order
                char* temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                }}}}
void printArray(char* arr[],int n){
    for(int i=0;i<n;i++){
        printf("%s\n",arr[i]);
    }}