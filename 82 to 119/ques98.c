#include <stdio.h>

int main() {
    char name[200];

    printf("Enter a full name: ");
    scanf("%[^\n]", name);

    int i = 0;

    
    if (name[0] != ' ') {
        printf("%c ", name[0]);
    }

    
    for (i = 1; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0') {

           
            
            int isLastSpace = 1;

            
            for (int j = i + 1; name[j] != '\0'; j++) {
                if (name[j] == ' ') {
                    isLastSpace = 0;
                    break;
                }
            }

            if (isLastSpace) {
                
                printf("%s\n", &name[i + 1]);
                return 0;
            } else {
                
                printf("%c ", name[i + 1]);
            }
        }
    }

    return 0;
}
