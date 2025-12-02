#include <stdio.h>

int main() {
    int n, key;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    int found = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = i;  
            break;
        }
    }

    if (found != -1)
        printf("Element %d found at position %d\n", key, found + 1);
    else
        printf("Element %d not found in the array.\n", key);

    return 0;
}
