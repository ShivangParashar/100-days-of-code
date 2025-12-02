#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int maxSoFar = arr[0];
    int currSum = arr[0];

    for (int i = 1; i < n; i++) {
        
        if (currSum + arr[i] > arr[i])
            currSum = currSum + arr[i];
        else
            currSum = arr[i];

    
        if (currSum > maxSoFar)
            maxSoFar = currSum;
    }

    printf("Maximum subarray sum = %d\n", maxSoFar);
    return 0;
}
