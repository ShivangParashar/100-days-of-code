#include <stdio.h>

int main() {
    int n;
    long long product = 1;  // use long long for large results

    printf("Enter n: ");
    scanf("%d", &n);

    
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {      // condition for even
            product *= i;      // multiply to product
        }
    }

    printf("Product of even numbers from 1 to %d = %lld\n", n, product);

    return 0;
}
