#include <stdio.h>
#include <stdbool.h> // For using bool data type

// Function to reverse a number using pointers
int reverseNumber(int num, int *reversed) {
    int remainder;
    *reversed = 0;

    while (num > 0) {
        remainder = num % 10;
        *reversed = *reversed * 10 + remainder;
        num /= 10;
    }
    return *reversed;
}

// Function to check if a number is a palindrome
bool isPalindrome(int num, int reversed) {
    return num == reversed;
}

int main() {
    int number;
    int reversedNumberResult;
    int* reversedPtr = &reversedNumberResult; //pointer to store reversed number

    printf("Enter a 5-digit number: ");
    scanf("%d", &number);

    if (number < 10000 || number > 99999) {
        printf("Please enter a valid 5-digit number.\n");
        return 1; // Indicate an error
    }

    reverseNumber(number, reversedPtr);

    printf("Reversed number: %d\n", *reversedPtr);

    if (isPalindrome(number, *reversedPtr)) {
        printf("%d is a palindrome.\n", number);
    } else {
        printf("%d is not a palindrome.\n", number);
    }

    return 0;
}