#include <stdio.h>

int main() {
    int n;
    printf("Enter n (terms): ");
    if (scanf("%d", &n)!=1) return 0;
    double sum = 0.0;
    int num = 1;
    int den = 1;
    for (int i=1;i<=n;i++) {
        den = den + 3; 
    }
    
    sum = 1.0;
    num = 3; den = 4;
    for (int i=2;i<=n;i++) {
        sum += (double)num / den;
        num += 2;
        den += 2;
    }
    if (n==0) sum = 0;
    printf("Sum = %.6f\n", sum);
    return 0;
}
