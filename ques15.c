#include<stdio.h>
int main(){
    char   a  ;

    
    printf("enter here:");
    scanf("%c",&a);
    if(a>='a'&& a<='z'){
    printf("it is a lowercase alphabet");}
    else if(a>='A' && a<='Z'){
        printf("it is an uppercase alphabet");}
        else if (a>='0' && a<='9') {
            printf("it is a digit");
            
        }
        else  {
            printf("it is a special character ");
        }
        return 0;}