#include <stdio.h>

int main() {
    int n, reversedNum = 0, lastDigit;

    // Input a number from the user
    printf("Enter an integer: ");
    scanf("%d", &n);

    // Use a while loop to reverse the number
    while (n != 0) {
        lastDigit = n % 10;                // Extract the last digit
        reversedNum = (reversedNum * 10) + lastDigit; // Build the reversed number
        n /= 10;                            // Remove the last digit
    }

    // Output the reversed number
    printf("Reversed number: %d\n", reversedNum);
    
    return 0;
}