#include <stdio.h>

#define X 2  // Dimension 1 of the 3D matrix
#define Y 2  // Dimension 2 of the 3D matrix
#define Z 2  // Dimension 3 of the 3D matrix

int main() {
    // Define the 3D matrices A, B, and C
    int A[X][Y][Z], B[X][Y][Z], C[X][Y][Z];

    // Input the elements for matrix A
    printf("Enter elements of matrix A (2 x 2 x 2):\n");
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            for (int k = 0; k < Z; k++) {
                //printf("A[%d][%d][%d]: ", i, j, k);
                scanf("%d", &A[i][j][k]);
            }
        }
    }

    // Input the elements for matrix B
    printf("Enter elements of matrix B (2 x 2 x 2):\n");
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            for (int k = 0; k < Z; k++) {
               // printf("B[%d][%d][%d]: ", i, j, k);
                scanf("%d", &B[i][j][k]);
            }
        }
    }

    // Multiply corresponding elements of A and B, and store the result in C
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            for (int k = 0; k < Z; k++) {
                C[i][j][k] = A[i][j][k] * B[i][j][k];
            }
        }
    }

    // Display the resulting matrix C
    printf("Result matrix C (2 x 2 x 2):\n");
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            for (int k = 0; k < Z; k++) {
                printf("%d ",C[i][j][k]);
            }
            printf("\n");
        }
         printf("\n");
    }

    return 0;
}
