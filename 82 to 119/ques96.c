#include <stdio.h>

int main() {
    char str[300];
    int start = 0; 
    printf("Enter a sentence: ");
    scanf("%[^\n]", str);

    for (int i = 0; ; i++) {

        
        if (str[i] == ' ' || str[i] == '\0') {

            int end = i - 1;

           
            while (start < end) {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }

            
            start = i + 1;

           
            if (str[i] == '\0')
                break;
        }
    }

    printf("Reversed words sentence: %s\n", str);

    return 0;
}
