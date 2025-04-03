#include <stdio.h>

// Function to find max and min using pointers
void findMaxMin(int *arr, int size, int *max, int *min) {
    int *ptr = arr;    // Pointer to traverse array
    
    // Initialize max and min with first element
    *max = *ptr;
    *min = *ptr;
    
    // Traverse array to find max and min
    for(int i = 1; i < size; i++) {
        ptr++;  // Move to next element
        
        // Update max if current element is larger
        if(*ptr > *max) {
            *max = *ptr;
        }
        
        // Update min if current element is smaller
        if(*ptr < *min) {
            *min = *ptr;
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
    int arr[] = {5, 2, 9, 1, 7, 6, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max, min;  // Variables to store maximum and minimum
    
    // Print original array
    printf("Array: ");
    printArray(arr, size);
    
    // Find max and min
    findMaxMin(arr, size, &max, &min);
    
    // Print results
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);
    
    return 0;
}