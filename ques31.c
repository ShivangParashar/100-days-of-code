#include <stdio.h>

int main() {
    unsigned int n;
    printf("Enter a non-negative integer: ");
    if (scanf("%u", &n)!=1) return 0;
    if (n==0) { printf("0\n"); return 0; }
    unsigned int rev = 0, digits = 0;
    while (n) {
        rev = rev*10 + (n%2);
        n /= 2;
        digits++;
    }
    while (rev) { printf("%u", rev%10); rev/=10; }
    printf("\n");
    return 0;
}
