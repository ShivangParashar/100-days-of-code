#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    int odd = 1;   // first odd number

    for(int i = 1; i <= n; i++) {
        sum += odd;     // add odd number
        odd += 2;       // next odd number
    }

    printf("Sum of first %d odd numbers = %d\n", n, sum);

    return 0;
}
