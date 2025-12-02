#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter the string: ");
    scanf("%[^\n]", str);

    
    while (str[length] != '\0') {
        length++;
    }

    printf("Reversed string will be: ");

    int isPalindrome = 1;  


    for (int i = 0; i < length; i++) {
        
        printf("%c", str[length - 1 - i]);

        
        if (str[i] != str[length - 1 - i]) {
            isPalindrome = 0;
        }
    }

    printf("\n");

    
    if (isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is NOT a palindrome.\n");

    return 0;
}
