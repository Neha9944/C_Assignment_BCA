#include <stdio.h>

int main() {
    int arr[3][3];  // 2D array with 3 rows and 3 columns
    int sum = 0;

    // Take input values from user for the 2D array
    printf("Enter elements of the array (3 x 3):\n");
    
    // Loop to get user input for each element in the 2D array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);  // Prompt for each element
            scanf("%d", &arr[i][j]);  // Store the input in the array
        }
    }

    // Calculate the sum of all the elements in the array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum = sum + arr[i][j];  // Add the element to the sum
        }
    }

    // Print the sum
    printf("Sum of all elements: %d\n", sum);

    return 0;
}   