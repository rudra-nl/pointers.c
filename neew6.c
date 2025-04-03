#include<stdio.h>

// Function to copy array elements using pointers
void copyArray(int *source, int *destination, int size) {
    int *src_ptr = source;      // Pointer to source array
    int *dest_ptr = destination; // Pointer to destination array
    
    // Copy elements one by one
    while(size > 0) {
        *dest_ptr = *src_ptr;  // Copy value from source to destination
        src_ptr++;             // Move to next source element
        dest_ptr++;            // Move to next destination position
        size--;                // Decrease remaining count
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
    // Sample source array
    int source[] = {1, 2, 3, 4, 5};
    int size = sizeof(source) / sizeof(source[0]);
    int destination[size];  // Destination array of same size
    
    // Print original arrays
    printf("Source array: ");
    printArray(source, size);
    printf("Destination array (before copy): ");
    printArray(destination, size);
    
    // Copy array
    copyArray(source, destination, size);
    
    // Print destination array after copy
    printf("Destination array (after copy): ");
    printArray(destination, size);
    
    return 0;
}