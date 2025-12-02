#include <stdio.h>

int main() {
    long n;
    printf("Enter integer: ");
    if (scanf("%ld", &n)!=1) return 0;
    long t = (n<0)?-n:n;
    long prod = 1;
    int found = 0;
    if (t==0) {
       
        printf("No odd digits. Product = 0\n");
        return 0;
    }
    while (t) {
        int d = t%10;
        if (d%2==1) { prod *= d; found = 1; }
        t /= 10;
    }
    if (!found) printf("No odd digits. Product = 0\n");
    else printf("Product of odd digits = %ld\n", prod);
    return 0;
}
