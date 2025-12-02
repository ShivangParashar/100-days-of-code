#include <stdio.h>

int main() {
    int n, k;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid number of elements\n");
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

    printf("Enter window size k: ");
    if (scanf("%d", &k) != 1 || k <= 0) {
        printf("Invalid window size\n");
        return 0;
    }

    if (k > n) {
        printf("Window size k is larger than array size\n");
        return 0;
    }

    long long windowSum = 0;

    for (int i = 0; i < k; i++) {
        windowSum += arr[i];
    }

    long long maxSum = windowSum;

    
    for (int i = k; i < n; i++) {
        windowSum += arr[i];        
        windowSum -= arr[i - k];    
        if (windowSum > maxSum)
            maxSum = windowSum;
    }

    printf("Maximum sum of any subarray of size %d = %lld\n", k, maxSum);
    return 0;
}
