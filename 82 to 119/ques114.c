#include <stdio.h>

int max(int a, int b) { return (a > b) ? a : b; }

int main() {
    char s[1000];

    printf("Enter a string: ");
    if (scanf("%[^\n]", s) != 1) {
        
        printf("0\n");
        return 0;
    }

    
    int last[256];
    for (int i = 0; i < 256; i++) last[i] = -1;

    int start = 0;     
    int maxLen = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)s[i];

        
        if (last[ch] >= start) {
            start = last[ch] + 1;
        }

       
        last[ch] = i;

        
        maxLen = max(maxLen, i - start + 1);
    }

    printf("%d\n", maxLen);
    return 0;
}
