#include <stdio.h>

int main() {
    char str[200];

    printf("Enter a string: ");
    scanf("%[^\n]", str);   

    for (int i = 0; str[i] != '\0'; i++) {

        // If lowercase a–z → convert to uppercase
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }

        // If uppercase A–Z → convert to lowercase
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }

    printf("Toggled string: %s\n", str);

    return 0;
}
