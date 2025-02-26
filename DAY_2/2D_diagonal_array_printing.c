#include <stdio.h>

int main() {
    int n;

    // Taking user input for matrix size
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int arr[n][n];  // Declare a 2D array with user-defined size

    // Taking user input for matrix elements
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Printing the matrix
    printf("\nMatrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Printing the diagonal elements
    printf("\nDiagonal Elements:\n");
    for (int i = 0; i < n; i++) {
        printf("Main Diagonal: %d", arr[i][i]); // Main diagonal
        if (i != n - 1 - i) { // Avoid duplicate printing for center element in odd-sized matrices
            printf(", Secondary Diagonal: %d", arr[i][n - 1 - i]); // Secondary diagonal
        }
        printf("\n");
    }

    return 0;
}