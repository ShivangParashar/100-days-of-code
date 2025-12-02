#include <stdio.h>

int main() {
    for (int i=0;i<5;i++) {
        for (int s=0;s<4-i;s++) putchar(' ');
        for (int v=5-i; v<=5; v++) printf("%d", v);
        putchar('\n');
    }
    return 0;
}

