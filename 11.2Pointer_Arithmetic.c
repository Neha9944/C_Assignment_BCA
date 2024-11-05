#include <stdio.h>

int main() {
    int n, sum = 0;
    float average;

    // Input number of elements in the array
    printf("Enter the number of elements:\n");
    scanf("%d", &n);

    // Declare an array of size n
    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n",n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Using a pointer to traverse the array and calculate sum
    int *ptr = arr;  // Pointer to the first element of the array

    for (int i = 0; i < n; i++) {
        sum += *(ptr + i);  // Dereference pointer to get the value and add to sum
    }

    // Calculate the average
    average = (float)sum / n;

    // Output the sum and average
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}
