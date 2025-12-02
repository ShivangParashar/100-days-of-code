#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int mat[rows][cols];

   
    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nDiagonal Traversal:\n");

   
    for (int startCol = 0; startCol < cols; startCol++) {
        int r = 0;
        int c = startCol;

        while (r < rows && c >= 0) {
            printf("%d ", mat[r][c]);
            r++;
            c--;
        }
        printf("\n");
    }

   
    for (int startRow = 1; startRow < rows; startRow++) {
        int r = startRow;
        int c = cols - 1;

        while (r < rows && c >= 0) {
            printf("%d ", mat[r][c]);
            r++;
            c--;
        }
        printf("\n");
    }

    return 0;
}
