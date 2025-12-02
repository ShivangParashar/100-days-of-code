#include <stdio.h>

long fact(int x) {
    long f=1;
    for (int i=2;i<=x;i++) f*=i;
    return f;
}

int main() {
    long n;
    printf("Enter integer: ");
    if (scanf("%ld", &n)!=1) return 0;
    long t = (n<0)?-n:n;
    long sum = 0;
    long temp = t;
    if (t==0) sum = 1; // 0! = 1
    while (temp) {
        sum += fact(temp%10);
        temp /= 10;
    }
    if ((n>=0 && sum==n) || (n<0 && sum==-n)) printf("Strong number\n");
    else printf("Not strong\n");
    return 0;
}
