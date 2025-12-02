#include <stdio.h>
#include <math.h>

int main() {
    long n;
    printf("Enter integer (>=0): ");
    if (scanf("%ld", &n)!=1) return 0;
    if (n < 10) { printf("%ld\n", n); return 0; }
    long t = n;
    long last = t % 10;
    long digits = 0;
    while (t) { digits++; t/=10; }
    long pow10 = 1;
    for (int i=1;i<digits;i++) pow10 *= 10;
    long first = n / pow10;
    long middle = n % pow10;
    middle = middle - last; // remove last
    long result = last * pow10 + middle + first;
    printf("%ld\n", result);
    return 0;
}
