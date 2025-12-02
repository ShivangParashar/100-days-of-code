#include <stdio.h>

int main() {
    char name[200];

    printf("Enter a full name: ");
    scanf("%[^\n]", name);

   
    if (name[0] != ' ') {
        printf("%c ", name[0]);
    }

    
    for (int i = 1; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i + 1] != '\0' && name[i + 1] != ' ') {
            printf("%c ", name[i + 1]);
        }
    }

    printf("\n");
    return 0;
}
