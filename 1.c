#include <stdio.h>

void incrementAndPrint(int *ptr1, int *ptr2) {
  // Increment the values using pointers
  (*ptr1)++;
  (*ptr2)++;

  // Print the incremented values inside the function
  //printf("Inside function: value1 = %d, value2 = %d\n", *ptr1, *ptr2);
}

int main() {
  int value1 = 10;
  int value2 = 20;

  printf("Before increment: value1 = %d, value2 = %d\n", value1, value2);

  // Pass the addresses of the variables to the function
  incrementAndPrint(&value1, &value2);

  // Print the values in main() after the function call
  printf("After increment: value1 = %d, value2 = %d\n", value1, value2);

  return 0;
}