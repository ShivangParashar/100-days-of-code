#include <stdio.h>

int main() {
    int n;

    printf("Enter size of the square matrix (n): ");
    scanf("%d", &n);

    int mat[n][n];
    int sum = 0;

   
    printf("Enter the matrix elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    
    for (int i = 0; i < n; i++) {
        sum += mat[i][i];
    }

    printf("Sum of main diagonal elements = %d\n", sum);

    return 0;
}
