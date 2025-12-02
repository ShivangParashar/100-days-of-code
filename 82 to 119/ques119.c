#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int xorVal = 0;

   
    for (int i = 0; i < n; i++) {
        xorVal ^= arr[i];      
        xorVal ^= i;           
    }

    
    xorVal ^= (n - 1);

    printf("Repeated element: %d\n", xorVal);

    return 0;
}
