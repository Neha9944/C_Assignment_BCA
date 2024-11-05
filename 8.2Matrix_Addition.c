#include <stdio.h>

int main() {
    int m, n;

    // Get the dimensions of the matrices
    printf("Enter the number of rows and columns:\n");
    scanf("%d %d", &m, &n);

    // Declare matrices
    int mat1[m][n], mat2[m][n], res[m][n];

    // Input elements for the first matrix
    printf("Enter elements of matrix 1:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("mat1[%d][%d] = ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    // Input elements for the second matrix
    printf("Enter elements of matrix 2:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("mat2[%d][%d] = ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

    // Add matrices and store the result in the third matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            res[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    // Print the result matrix
    printf("Resultant Matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}
