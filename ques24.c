#include <stdio.h>
int main(){
    float unit,bill;
    printf("enter the number of units:");
    scanf("%f",&unit);

    if(unit<=100){
        bill=100*5;
        printf("the bill is:%.2f$",bill);

    }
    else if(unit<=200){
        bill=100*5+(unit-100)*7;
        printf("the bill is:%.2f$",bill);

    }
    else if(unit<=300){
        bill=100*5+100*7+(unit-200)*10;
        printf("the bill is:%.2f$",bill);
    }
    else if(unit>300){
        bill=100*5+100*7+100*10+(unit-300)*12;
        printf("the bill is:%.2f$",bill);
    }
    return 0;
}