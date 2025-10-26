#include <stdio.h>

#define MAX 10

int main() {
    int mat[MAX][MAX], rowSum[MAX], colSum[MAX];
    int rows, cols;

    printf("Enter matrix dimensions:\n");
    printf("Rows: ");
    scanf("%d", &rows);
    printf("Columns: ");
    scanf("%d", &cols);

    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nOriginal Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < rows; i++) {
        rowSum[i] = 0;
        for (int j = 0; j < cols; j++) {
            rowSum[i] += mat[i][j];
        }
    }

    for (int j = 0; j < cols; j++) {
        colSum[j] = 0;
        for (int i = 0; i < rows; i++) {
            colSum[j] += mat[i][j];
        }
    }

    printf("\nRow Sums:\n");
    for (int i = 0; i < rows; i++) {
        printf("Row %d: %d\n", i, rowSum[i]);
    }

    printf("\nColumn Sums:\n");
    for (int j = 0; j < cols; j++) {
        printf("Column %d: %d\n", j, colSum[j]);
    }

    return 0;
}