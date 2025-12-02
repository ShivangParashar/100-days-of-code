#include <stdio.h>

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];  
    printf("Enter %d elements (from 0 to %d, missing one number):\n", n, n);

    long long sum = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    long long expectedSum = (long long)n * (n + 1) / 2;

    int missing = expectedSum - sum;

    printf("Missing number: %d\n", missing);

    return 0;
}
