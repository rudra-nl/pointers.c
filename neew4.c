#include <stdio.h>

// Function to calculate sum of elements and store in result array using pointers
void sumArrays(int *arr1, int *arr2, int *result, int size) {
    int *ptr1 = arr1;      // Pointer to first array
    int *ptr2 = arr2;      // Pointer to second array
    int *ptr_result = result;  // Pointer to result array
    
    // Calculate sum for each position
    for(int i = 0; i < size; i++) {
        *ptr_result = *ptr1 + *ptr2;
        ptr1++;
        ptr2++;
        ptr_result++;
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
    // Sample arrays (must be same size)
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};
    
    int size = sizeof(arr1) / sizeof(arr1[0]);
    int result[size];  // Result array to store sums
    
    // Print original arrays
    printf("First array: ");
    printArray(arr1, size);
    printf("Second array: ");
    printArray(arr2, size);
    
    // Calculate sums and store in result array
    sumArrays(arr1, arr2, result, size);
    
    // Print result array
    printf("Sum array: ");
    printArray(result, size);
    
    return 0;
}