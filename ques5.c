#include<stdio.h>

int main(){
    float celsius;
    float fahrenheit;


    printf("enter the temperature in celsius:");
    scanf("%f",&celsius);

    fahrenheit=((float)9/5*celsius)+32;

    printf("the temperature in fahrenheit is %f",fahrenheit);
    return 0;}