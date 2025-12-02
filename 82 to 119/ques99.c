#include <stdio.h>

int main() {
    char date[20];
    char newDate[20];

    printf("Enter date in dd/04/yyyy format: ");
    scanf("%s", date);  

    
    newDate[0] = date[0];
    newDate[1] = date[1];
    newDate[2] = date[2];

    
    newDate[3] = 'A';
    newDate[4] = 'p';
    newDate[5] = 'r';
    newDate[6] = '-';

    
    
    int j = 7;
    for (int i = 6; date[i] != '\0'; i++) {
        newDate[j++] = date[i];
    }

    newDate[j] = '\0';

    printf("Converted date: %s\n", newDate);

    return 0;
}
