#include <stdio.h>

int main() {
    int matrix[10][10], transpose[10][10];
    int n, i, j;
    int symmetric = 1;
    int skewSymmetric = 1;

    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            transpose[i][j] = matrix[j][i];
        }
    }

    printf("Transpose of matrix:\n");

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {

            if (matrix[i][j] != transpose[i][j]) {
                symmetric = 0;
            }

            if (matrix[i][j] != -transpose[i][j]) {
                skewSymmetric = 0;
            }
        }
    }

    if (symmetric) {
        printf("The matrix is symmetric.");
    } else if (skewSymmetric) {
        printf("The matrix is skew-symmetric.");
    } else {
        printf("The matrix is neither symmetric nor skew-symmetric.");
    }

    return 0;
}