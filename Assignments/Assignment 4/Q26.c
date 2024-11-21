#include <stdio.h>

void transpose(int *matrix, int rows, int cols, int *result) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            *(result + j * rows + i) = *(matrix + i * cols + j);
        }
    }
}

int main() {
    int rows, cols;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    int result[cols][rows];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);
    }

    transpose(&matrix[0][0], rows, cols, &result[0][0]);

    printf("The transposed matrix is:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) 
            printf("%d ", result[i][j]);
        printf("\n");
    }

    return 0;
}
