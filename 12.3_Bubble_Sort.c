#include <stdio.h>

// Function to swap two integers using pointers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Bubble sort function to sort the array
void bubbleSort(int arr[], int n) {
    // Outer loop for each pass through the array
    for (int i = 0; i < n-1; i++) {
        // Inner loop to perform the comparisons and swaps
        for (int j = 0; j < n-i-1; j++) {
            // If the element at index j is greater than the next element
            if (arr[j] > arr[j+1]) {
                // Swap the elements using the swap function
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

// Main function
int main() {
    int n;

    // Read the number of elements in the array
    printf("Enter the number of elements:\n");
    scanf("%d", &n);

    int arr[n];

    // Read the array elements from the user
    printf("Enter %d elements:\n",n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call bubbleSort to sort the array
    bubbleSort(arr, n);

    // Print the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
