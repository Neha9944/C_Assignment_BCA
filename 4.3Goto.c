#include <stdio.h>

int main() {
    int num;
    int factorial = 1;

    // Input a number from the user
    printf("Enter a positive integer: ");
    //scanf("%d", &num);
    if (scanf("%d", &num) != 1) {
        goto error; // Jump to error handling if input is invalid
    }

    
    // Check for negative input
    if (num < 0 ) {
        goto error; // Jump to error handling if negative
    }

    // Calculate factorial
    for (int i = 1; i <= num; i++) {
        factorial = factorial* i;
    }

    // Print the result
    printf("Factorial of %d = %d", num, factorial);
    return 0;

error:
    // Error handling
    printf("Invalid input. Please enter a positive integer.");
    return 1; // Return a non-zero value to indicate an error
}
