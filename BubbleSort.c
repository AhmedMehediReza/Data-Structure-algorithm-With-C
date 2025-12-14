#include <stdio.h>

// Function to perform bubble sort
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        // A flag to detect if any swap was made
        int swapped = 0;

        // Last i elements are already sorted, so no need to check them
        for (int j = 0; j < size - 1 - i; j++) {
            // Compare adjacent elements and swap if necessary
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1; // A swap occurred
            }
        }

        // If no swaps were made in the inner loop, the array is sorted
        if (swapped == 0) {
            break;
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
    int arr[] = {64, 34, 25, 12, 22, 11, 90}; // Sample array
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    printf("Given array: \n");
    printArray(arr, arrSize);

    bubbleSort(arr, arrSize); // Call bubble sort

    printf("\nSorted array: \n");
    printArray(arr, arrSize);

    return 0;
}