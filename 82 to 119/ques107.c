#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input\n");
        return 0;
    }

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input\n");
            return 0;
        }
    }

    // For each element find previous greater element (nearest on left)
    for (int i = 0; i < n; i++) {
        int pge = -1;                 // default if none found
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {   // first greater on the left
                pge = arr[j];
                break;
            }
        }

        if (i != 0) printf(", ");
        printf("%d", pge);
    }

    printf("\n");
    return 0;
}
