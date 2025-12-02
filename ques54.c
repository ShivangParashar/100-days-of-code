#include <stdio.h>

int main() {
    int n = 4; 
    for (int i=0;i<=n;i++) {
        for (int s=0;s<n-i;s++) putchar(' ');
        for (int k=0;k<2*i+1;k++) putchar('*');
        putchar('\n');
    }
    for (int i=n-1;i>=0;i--) {
        for (int s=0;s<n-i;s++) putchar(' ');
        for (int k=0;k<2*i+1;k++) putchar('*');
        putchar('\n');
    }
    return 0;
}
