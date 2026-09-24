#include <stdio.h>

int main() {
    int matrix[10][10];
    int m, n, i, j;
    int sum;

    printf("Enter number of rows: ");
    scanf("%d", &m);

    printf("Enter number of columns: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nRow-wise sums:\n");

    for (i = 0; i < m; i++) {
        sum = 0;

        for (j = 0; j < n; j++) {
            sum += matrix[i][j];
        }

        printf("Row %d = %d\n", i + 1, sum);
    }

    printf("\nColumn-wise sums:\n");

    for (j = 0; j < n; j++) {
        sum = 0;

        for (i = 0; i < m; i++) {
            sum += matrix[i][j];
        }

        printf("Column %d = %d\n", j + 1, sum);
    }

    return 0;
}