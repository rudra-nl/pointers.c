#include <stdio.h>

// Function to sort array in ascending order using pointers (bubble sort)
void sortAscending(int *arr, int size) {
    int *ptr = arr;
    int temp;
    
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(*(ptr + j) > *(ptr + j + 1)) {
                // Swap elements
                temp = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = temp;
            }
        }
    }
}

// Function to sort array in descending order using pointers (bubble sort)
void sortDescending(int *arr, int size) {
    int *ptr = arr;
    int temp;
    
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(*(ptr + j) < *(ptr + j + 1)) {
                // Swap elements (opposite condition from ascending)
                temp = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = temp;
            }
        }
    }
}

// Function to print array using pointers
void printArray(int *arr, int size) {
    int *ptr = arr;
    for(int i = 0; i < size; i++) {
        printf("%d ", *ptr);
        ptr++;
    }
    printf("\n");
}

int main() {
    // Sample array
    int arr[] = {5, 2, 9, 1, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    // Make a copy for descending sort
    int arr_copy[size];
    for(int i = 0; i < size; i++) {
        arr_copy[i] = arr[i];
    }
    
    // Print original array
    printf("Original array: ");
    printArray(arr, size);
    
    // Sort and print in ascending order
    sortAscending(arr, size);
    printf("Sorted in ascending order: ");
    printArray(arr, size);
    
    // Sort and print in descending order
    sortDescending(arr_copy, size);
    printf("Sorted in descending order: ");
    printArray(arr_copy, size);
    
    return 0;
}