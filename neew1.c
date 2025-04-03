#include <stdio.h>

// Function to merge arrays and remove duplicates
int mergeAndRemoveDuplicates(int *arr1, int size1, int *arr2, int size2, int *result) {
    int *ptr_result = result;
    int totalSize = 0;
    
    // Copy first array
    for(int *ptr1 = arr1; ptr1 < arr1 + size1; ptr1++) {
        // Check if number already exists in result
        int isDuplicate = 0;
        for(int *check = result; check < ptr_result; check++) {
            if(*check == *ptr1) {
                isDuplicate = 1;
                break;
            }
        }
        if(!isDuplicate) {
            *ptr_result = *ptr1;
            ptr_result++;
            totalSize++;
        }
    }
    
    // Copy second array, checking for duplicates
    for(int *ptr2 = arr2; ptr2 < arr2 + size2; ptr2++) {
        int isDuplicate = 0;
        for(int *check = result; check < ptr_result; check++) {
            if(*check == *ptr2) {
                isDuplicate = 1;
                break;
            }
        }
        if(!isDuplicate) {
            *ptr_result = *ptr2;
            ptr_result++;
            totalSize++;
        }
    }
    
    return totalSize;  // Return the size of unique elements
}

// Function to sort array using bubble sort with pointers
void sortArray(int *arr, int size) {
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(*(arr + j) > *(arr + j + 1)) {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
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
    // Sample arrays with some duplicates
    int arr1[] = {5, 2, 9, 1, 5, 2};    // 5 and 2 are duplicates
    int arr2[] = {8, 2, 7, 1, 9, 4};    // 2, 1, 9 overlap with arr1
    
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int maxSize = size1 + size2;  // Maximum possible size
    
    int result[maxSize];
    
    // Print original arrays
    printf("First array: ");
    printArray(arr1, size1);
    printf("Second array: ");
    printArray(arr2, size2);
    
    // Merge arrays and remove duplicates
    int uniqueSize = mergeAndRemoveDuplicates(arr1, size1, arr2, size2, result);
    
    // Sort the result
    sortArray(result, uniqueSize);
    
    // Print merged, deduplicated, and sorted array
    printf("Merged, deduplicated, and sorted array: ");
    printArray(result, uniqueSize);
    
    return 0;
}