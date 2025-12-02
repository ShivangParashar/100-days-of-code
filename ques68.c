#include <stdio.h>

int main() {
    int n, key;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to delete: ");
    scanf("%d", &key);

    int i;
   
    for (i = 0; i < n; i++) {
        if (arr[i] == key)
            break;       
    }

    
    if (i == n) {
        printf("Element not found.\n");
        return 0;
    }

    
    for (; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--; 

    
    printf("Array after deletion:\n");
    for (int j = 0; j < n; j++)
        printf("%d ", arr[j]);

    return 0;
}

