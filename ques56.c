#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    if (scanf("%d", &n)!=1 || n<=0) return 0;
    int a[n];
    printf("Enter %d integers:\n", n);
    for (int i=0;i<n;i++) scanf("%d", &a[i]);
    printf("You entered: ");
    for (int i=0;i<n;i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
