#include <stdio.h>

#define SIZE 10

void get_matrix(int mat[SIZE][SIZE], int r, int c) {
    printf("Enter matrix data:\n");
    for (int x = 0; x < r; x++) {
        for (int y = 0; y < c; y++) {
            printf("Element [%d][%d]: ", x+1, y+1);
            scanf("%d", &mat[x][y]);
        }
    }
}

void show_matrix(int mat[SIZE][SIZE], int r, int c) {
    for (int x = 0; x < r; x++) {
        for (int y = 0; y < c; y++) {
            printf("%d ", mat[x][y]);
        }
        printf("\n");
    }
}

void matrix_multiply(
    int a[SIZE][SIZE], int r1, int c1,
    int b[SIZE][SIZE], int r2, int c2,
    int res[SIZE][SIZE]
) {
    if (c1 != r2) {
        printf("Can't multiply matrices!\n");
        return;
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            res[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main() {
    int first[SIZE][SIZE];
    int second[SIZE][SIZE];
    int output[SIZE][SIZE];
    
    int r1, c1, r2, c2;

    printf("Enter first matrix details:\n");
    printf("Rows: ");
    scanf("%d", &r1);
    printf("Columns: ");
    scanf("%d", &c1);

    printf("Enter second matrix details:\n");
    printf("Rows: ");
    scanf("%d", &r2);
    printf("Columns: ");
    scanf("%d", &c2);

    if (r1 <= 0 || c1 <= 0 || r2 <= 0 || c2 <= 0) {
        printf("Invalid matrix size!\n");
        return 1;
    }

    if (c1 != r2) {
        printf("Matrix multiplication not possible!\n");
        return 1;
    }

    printf("\nFirst matrix input:\n");
    get_matrix(first, r1, c1);

    printf("\nSecond matrix input:\n");
    get_matrix(second, r2, c2);

    printf("\nFirst Matrix:\n");
    show_matrix(first, r1, c1);

    printf("\nSecond Matrix:\n");
    show_matrix(second, r2, c2);

    matrix_multiply(first, r1, c1, second, r2, c2, output);

    printf("\nResult Matrix:\n");
    show_matrix(output, r1, c2);

    return 0;
}