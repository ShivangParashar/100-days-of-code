#include<stdio.h>
int main(){
    char  letter;
    
    printf("enter the letter:");
    scanf("%c",&letter);
    
    if(letter=='a'|| letter=='e' || letter=='i' || letter=='o'|| letter=='u'){
        // remember to use ' ' instead of " "
        
    printf("it is a vowel");}
    else if(letter>='a' && letter<='z'){
        printf("it is a consonant");}
        else {
            printf("it is not a letter");
        }
        return 0;} 



        
    


    





   






