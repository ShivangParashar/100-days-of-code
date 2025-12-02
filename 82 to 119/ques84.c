#include <stdio.h>

int main() {
    char str[100];
    int diff = 'a' - 'A';   
    printf("Enter a lowercase string: ");
    scanf("%[^\n]", str);

    for (int i = 0; str[i] != '\0'; i++) {

        
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - diff;   
        }
    }

    printf("Uppercase string: %s\n", str);

    return 0;
}
