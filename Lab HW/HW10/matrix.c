#include <stdio.h>

int main() {
    int i1, j1, i2, j2;

    printf("Enter the size of the first matrix: ");
    scanf("%d %d", &i1, &j1);
    printf("Enter the size of the second matrix: ");
    scanf("%d %d", &i2, &j2);

    if (j1 != i2) {
        printf("Invalid matrix sizes! The number of columns in the first matrix must be equal to the number of rows in the second matrix.\n");
        return 1;
    }

    int mat1[i1][j1], mat2[i2][j2], res[i1][j2];
    
    printf("Enter the first matrix:\n");
    for (int i = 0; i < i1; i++) {
        for (int j = 0; j < j1; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter the second matrix:\n");
    for (int i = 0; i < i2; i++) {
        for (int j = 0; j < j2; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

    for (int i = 0; i < i1; i++) {
        for (int j = 0; j < j2; j++) {
            res[i][j] = 0;
            for (int k = 0; k < j1; k++) {
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    printf("Resultant matrix:\n");
    for (int i = 0; i < i1; i++) {
        for (int j = 0; j < j2; j++) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
    return 0;
}