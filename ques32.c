#include <stdio.h>

int main() {
    long n, t;
    printf("Enter integer: ");
    if (scanf("%ld", &n)!=1) return 0;
    t = n;
    long rev = 0;
    long sign = (n<0)?-1:1;
    n *= sign;
    while (n) {
        rev = rev*10 + (n%10);
        n /= 10;
    }
    rev *= sign;
    printf("%s\n", (rev==t) ? "Palindrome" : "Not Palindrome");
    return 0;
}
