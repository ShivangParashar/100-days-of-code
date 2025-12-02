#include <stdio.h>

int main() {
    char str[200];

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    for (int i = 0; str[i] != '\0'; i++) {          
        for (int j = i; str[j] != '\0'; j++) {      
            for (int k = i; k <= j; k++) {          
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}
