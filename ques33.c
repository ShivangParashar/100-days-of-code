#include <stdio.h>
#include <math.h>

int main() {
    long n; 
    printf("Enter number: ");
    if (scanf("%ld", &n)!=1) return 0;
    long t = (n<0)?-n:n;
    long temp = t;
    int digits = 0;
    while (temp) { digits++; temp/=10; }
    if (digits==0) digits = 1; // n==0
    long sum = 0;
    temp = t;
    while (temp) {
        int d = temp%10;
        long p = 1;
        for (int i=0;i<digits;i++) p *= d;
        sum += p;
        temp/=10;
    }
    if ((n>=0 && sum==n) || (n<0 && sum==-n))
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");
    return 0;
}
