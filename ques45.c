#include <stdio.h>

int main() {
    int n;
    printf("Enter n (terms): ");
    if (scanf("%d", &n)!=1) return 0;
    double sum = 0.0;
    int num = 2;
    int den = 3;
    for (int i=1;i<=n;i++) {
        sum += (double)num / den;
        num += 2;
        den += 4;
    }
    printf("Sum = %.6f\n", sum);
    return 0;
}
