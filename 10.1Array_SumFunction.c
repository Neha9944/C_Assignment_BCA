
#include <stdio.h>

// Function to calculate the sum of elements in an array
int sumOfArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum = sum + arr[i];  // Add each element to sum
    }
    return sum;
}

int main() {
    int n;

    // Prompt the user to enter the number of elements
    printf("Enter the number of elements in the array:\n");
    scanf("%d", &n);

    // Declare the array with the size entered by the user
    int arr[n];

    // Prompt the user to enter the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call the sumOfArray function and display the result
    int result = sumOfArray(arr, n);
    printf("The sum of the elements in the array is: %d\n", result);

    return 0;
}
