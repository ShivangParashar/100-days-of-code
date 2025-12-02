#include <stdio.h>

int main() {
    for (int row=0;row<5;row++) {
        for (int val=5-row; val<=5; val++) {printf("%d", val);}
        printf("\n");
    }
    return 0;
}
