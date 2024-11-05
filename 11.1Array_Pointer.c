#include <stdio.h>

int main() {
    int arr[5];           // Declare an integer array of size 5
    int *ptr = arr;       // Declare a pointer to the first element of the array

    // Input values into the array using the pointer
    printf("Enter 5 elements:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", ptr + i);  // Store the value in the array using the pointer
    }

    // Print the array elements using the pointer
    printf("Array elements are:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));  // Dereference pointer to print values
    }

    return 0;
}

