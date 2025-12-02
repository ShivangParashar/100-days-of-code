#include <stdio.h>
#include <string.h>

int main() {
    char str1[200], str2[200], temp[400];

    printf("Enter first string: ");
    scanf("%[^\n]", str1);

    getchar(); 

    printf("Enter second string: ");
    scanf("%[^\n]", str2);

    
    if (strlen(str1) != strlen(str2)) {
        printf("Not a rotation.\n");
        return 0;
    }

   
    strcpy(temp, str1);
    strcat(temp, str1);

    
    if (strstr(temp, str2) != NULL)
        printf("Yes, the second string IS a rotation of the first.\n");
    else
        printf("No, the second string is NOT a rotation.\n");

    return 0;
}
