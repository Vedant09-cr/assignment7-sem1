#include <stdio.h>

int main() {
    int matrix[10][10];
    int n, i, j;
    int mainSum = 0, secondarySum = 0;
    int upper = 1, lower = 1, diagonal = 1;

    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        mainSum += matrix[i][i];
        secondarySum += matrix[i][n - 1 - i];
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {

            if (i > j && matrix[i][j] != 0) {
                upper = 0;
            }

            if (i < j && matrix[i][j] != 0) {
                lower = 0;
            }

            if (i != j && matrix[i][j] != 0) {
                diagonal = 0;
            }
        }
    }

    printf("Main diagonal sum = %d\n", mainSum);
    printf("Secondary diagonal sum = %d\n", secondarySum);

    if (diagonal) {
        printf("The matrix is a diagonal matrix.");
    } else if (upper) {
        printf("The matrix is an upper triangular matrix.");
    } else if (lower) {
        printf("The matrix is a lower triangular matrix.");
    } else {
        printf("The matrix is none of these.");
    }

    return 0;
}