#include <stdio.h>

int main() {
    int max = 9; // top width
    for (int stars=1; stars<=max; stars+=2) {
        for (int j=0;j<stars;j++) putchar('*');
        putchar('\n');
    }
    for (int stars=max-2; stars>=1; stars-=2) {
        for (int j=0;j<stars;j++) putchar('*');
        putchar('\n');
    }
    return 0;
}
