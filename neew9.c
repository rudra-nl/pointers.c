#include <stdio.h>
// Function to increment each element by 1 using pointers
void incrementArray(int *arr, int size) {
    int *ptr = arr;  // Pointer to traverse array
    
    // Increment each element
    while(size > 0) {
        *ptr = *ptr + 1;  // Increment current element
        ptr++;            // Move to next element
        size--;           // Decrease remaining count
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
    int size;
    
    // Get array size from user
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    // Check for valid size
    if(size <= 0) {
        printf("Please enter a valid size greater than 0\n");
        return 1;
    }
    
    int arr[size];  // Declare array with user-specified size
    
    // Input array elements
    printf("Enter %d elements:\n", size);
    int *ptr = arr;
    for(int i = 0; i < size; i++) {
        scanf("%d", ptr);
        ptr++;
    }
    
    // Print original array
    printf("Original array: ");
    printArray(arr, size);
    
    // Increment all elements
    incrementArray(arr, size);
    
    // Print modified array
    printf("Array after incrementing by 1: ");
    printArray(arr, size);
    
    return 0;
}