#include <stdio.h>

// Function to merge two arrays using pointers
void mergeArrays(int *arr1, int size1, int *arr2, int size2, int *result) {
    int *ptr1 = arr1;    // Pointer to first array
    int *ptr2 = arr2;    // Pointer to second array
    int *ptr_result = result;  // Pointer to result array
    
    // Copy elements from first array
    for(int i = 0; i < size1; i++) {
        *ptr_result = *ptr1;
        ptr_result++;
        ptr1++;
    }
    
    // Copy elements from second array
    for(int i = 0; i < size2; i++) {
        *ptr_result = *ptr2;
        ptr_result++;
        ptr2++;
    }
}

// Function to sort array using bubble sort with pointers
void sortArray(int *arr, int size) {
    int *ptr = arr;
    int temp;
    
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(*(ptr + j) > *(ptr + j + 1)) {
                // Swap elements using pointers
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
    // Sample arrays
    int arr1[] = {5, 2, 9, 1};
    int arr2[] = {8, 3, 7, 4, 6};
    
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int totalSize = size1 + size2;
    
    // Create result array to store merged arrays
    int result[totalSize];
    
    // Print original arrays
    printf("First array: ");
    printArray(arr1, size1);
    printf("Second array: ");
    printArray(arr2, size2);
    
    // Merge arrays
    mergeArrays(arr1, size1, arr2, size2, result);
    
    // Sort merged array
    sortArray(result, totalSize);
    
    // Print merged and sorted array
    printf("Merged and sorted array: ");
    printArray(result, totalSize);
    
    return 0;
}

//This program:

// Defines three main functions using pointers:
// mergeArrays: Merges two arrays into a single array
// sortArray: Sorts the merged array using bubble sort
// printArray: Prints the array contents
// Uses pointer arithmetic instead of array indexing where possible:
// *ptr to access values
// ptr++ to move to next element
// *(ptr + j) for accessing elements in sorting
// In the main function:
// Creates two sample arrays
// Calculates their sizes
// Creates a result array big enough to hold both
// Calls the functions to merge and sort
// Prints the results
// When you run this program, it will:

// Show the original arrays
// Merge them into one array
// Sort the merged array in ascending order
// Display the final sorted array
//The program uses bubble sort for simplicity, 
// but you could modify it to use more efficient sorting algorithms like quicksort or mergesort. 
// The pointer usage demonstrates how to manipulate array elements without traditional indexing, 
// though in practice, array notation might be more readable for simple operations.

//https://grok.com/share/bGVnYWN5_40237891-cb32-4a01-860d-fcfc7bac5464