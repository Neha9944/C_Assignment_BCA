#include <stdio.h>

// Function to swap two numbers using pointers
void swap(int *a, int *b) {
    int temp = *a;  // Store the value at the address a in a temporary variable
    *a = *b;        // Assign the value at address b to address a
    *b = temp;      // Assign the temporary value to address b
}

int main() {
    int x, y;

    // Ask the user to input two numbers
    printf("Enter the first number:\n");
    scanf("%d", &x);
    
     printf("Enter the second number:\n");
    scanf("%d", &y);

    // Display values before swapping
    printf("Before swapping: num1 = %d, num2 = %d\n", x, y);

    // Call the swap function, passing the addresses of x and y
    swap(&x, &y);

    // Display values after swapping
    printf("After swapping: num1 = %d, num2 = %d\n", x, y);

    return 0;
}
