#include <stdio.h>

// Function to find and print duplicate elements using pointers
void findDuplicates(int *arr, int size) {
    int *ptr1, *ptr2;
    int hasDuplicates = 0;  // Flag to check if any duplicates exist
    
    printf("Duplicate elements: ");
    
    // Outer loop pointer
    for(ptr1 = arr; ptr1 < arr + size - 1; ptr1++) {
        // Inner loop pointer starts from next element
        for(ptr2 = ptr1 + 1; ptr2 < arr + size; ptr2++) {
            if(*ptr1 == *ptr2) {
                // Only print if we haven't already found this duplicate
                int alreadyPrinted = 0;
                for(int *check = arr; check < ptr1; check++) {
                    if(*check == *ptr1) {
                        alreadyPrinted = 1;
                        break;
                    }
                }
                if(!alreadyPrinted) {
                    printf("%d ", *ptr1);
                    hasDuplicates = 1;
                }
            }
        }
    }
    
    if(!hasDuplicates) {
        printf("None found");
    }
    printf("\n");
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
    // Sample arrays with duplicates
    int arr1[] = {5, 2, 9, 1, 5, 2, 7, 9};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    
    int arr2[] = {1, 2, 3, 4, 5};  // No duplicates
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    
    // Test first array
    printf("Array 1: ");
    printArray(arr1, size1);
    findDuplicates(arr1, size1);
    
    // Test second array
    printf("\nArray 2: ");
    printArray(arr2, size2);
    findDuplicates(arr2, size2);
    
    return 0;
}