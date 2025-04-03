#include <stdio.h>

// Function to reverse array using pointers
void reverseArray(int *arr, int size) {
    int *start = arr;          // Pointer to start of array
    int *end = arr + size - 1; // Pointer to end of array
    int temp;
    
    // Swap elements from start and end until pointers meet
    while(start < end) {
        // Swap values using pointers
        temp = *start;
        *start = *end;
        *end = temp;
        
        // Move pointers towards center
        start++;
        end--;
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
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    // Print original array
    printf("Original array: ");
    printArray(arr, size);
    
    // Reverse the array
    reverseArray(arr, size);
    
    // Print reversed array
    printf("Reversed array: ");
    printArray(arr, size);
    
    return 0;
}
