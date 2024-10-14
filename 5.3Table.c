#include <stdio.h>

int main() {
    int n;

    // Prompt user for input
    printf("Enter the value of n: ");
    scanf("%d", &n);

    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%4d", i * j); // Print the product with formatting
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}