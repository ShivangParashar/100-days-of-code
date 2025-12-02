#include <stdio.h>

int main() {
    int n;

    printf("Enter size of the square matrix (n): ");
    scanf("%d", &n);

    int mat[n][n];
    int diag[n];   
    int isDistinct = 1;

    
    printf("Enter the matrix elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    
    for (int i = 0; i < n; i++) {
        diag[i] = mat[i][i];
    }

    
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (diag[i] == diag[j]) {
                isDistinct = 0;
                break;
            }
        }
        if (!isDistinct)
            break;
    }

    
    if (isDistinct)
        printf("All diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are NOT distinct.\n");

    return 0;
}

