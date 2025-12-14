#include <stdio.h>

// Function to perform selection sort
void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        // Assume the minimum element is the first element of the unsorted part
        int minIndex = i;

        // Find the index of the minimum element in the unsorted part
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j; // Update minIndex if a smaller element is found
            }
        }

        // Swap the found minimum element with the first element of the unsorted part
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {64, 25, 12, 22, 11}; // Sample array
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    printf("Given array: \n");
    printArray(arr, arrSize);

    selectionSort(arr, arrSize); // Call selection sort

    printf("\nSorted array: \n");
    printArray(arr, arrSize);

    return 0;
}