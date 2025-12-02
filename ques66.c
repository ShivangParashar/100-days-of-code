#include <stdio.h>

int main() {
    int n, x, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n+1]; 

    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &x);

   
    pos = n - 1;
    while (pos >= 0 && arr[pos] > x) {
        arr[pos + 1] = arr[pos];  
        pos--;
    }

   
    arr[pos + 1] = x;
    n++;  
    
    printf("Array after insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
