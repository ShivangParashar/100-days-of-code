#include <stdio.h>
#include <math.h>

int main() {
    float p, r,t;
    float si,ci,amount;
    printf("enter the principle:");
    scanf("%f",&p);

    printf("enter the rate:");
    scanf("%f",&r);

    printf("enter the time:");
    scanf("%f",&t);
    si=p*r*t/100;
    amount=p*pow((1+r/100),t);
    ci=amount-p;







    printf("the simple interest will be %.2f\n",si);
    // for two decimal places use %.2f
printf("the compound interest will be %.2f\n",ci);


    return 0;
}
