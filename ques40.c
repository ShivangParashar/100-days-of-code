#include <stdio.h>

int main() {
    long b;
    printf("Enter binary number (digits 0 and 1): ");
    if (scanf("%ld", &b)!=1) return 0;
    if (b==0) { printf("1\n"); return 0; }
    long rev = 0;
    long t = b;
    while (t) { rev = rev*10 + (t%10); t/=10; }
    long out = 0;
    while (rev) {
        int d = rev%10;
        if (d!=0 && d!=1) { printf("Invalid binary input\n"); return 0; }
        out = out*10 + (d==0 ? 1 : 0);
        rev/=10;
    }
    printf("%ld\n", out);
    return 0;
}
