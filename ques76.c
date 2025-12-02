#include <stdio.h>

int main() {
    int n;

    printf("Enter size of the square matrix (n): ");
    scanf("%d", &n);

    int mat[n][n];
    int isSymmetric = 1;  

    
    printf("Enter the matrix elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j] != mat[j][i]) {
                isSymmetric = 0;    
                break;
            }
        }
        if (!isSymmetric)
            break;
    }

   
    if (isSymmetric)
        printf("The matrix is symmetric.\n");
    else
        printf("The matrix is NOT symmetric.\n");

    return 0;
}
