#include <stdio.h>

#define SIZE 10

int main() {
    int mat[SIZE][SIZE], trans[SIZE][SIZE];
    int rows, cols;

    printf("How many rows? ");
    scanf("%d", &rows);
    printf("How many columns? ");
    scanf("%d", &cols);

    printf("Feed matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            trans[j][i] = mat[i][j];
        }
    }

    printf("\nFirst matrix looks like:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    printf("\nTransposed matrix looks like:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }

    return 0;
}