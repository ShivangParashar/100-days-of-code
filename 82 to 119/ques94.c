#include <stdio.h>

int main() {
    char str[300];
    int maxLen = 0, currLen = 0;
    int maxStart = 0, currStart = 0;

    printf("Enter a sentence: ");
    scanf("%[^\n]", str);

    for (int i = 0; ; i++) {

        if (str[i] != ' ' && str[i] != '\0') {
           
            if (currLen == 0) {
                currStart = i;   
            }
            currLen++;
        }
        else {
           
            if (currLen > maxLen) {
                maxLen = currLen;
                maxStart = currStart;
            }

            currLen = 0;  
            if (str[i] == '\0')
                break;
        }
    }

   
    printf("Longest word: ");
    for (int i = maxStart; i < maxStart + maxLen; i++) {
        printf("%c", str[i]);
    }

    printf("\nLength: %d\n", maxLen);

    return 0;
}
