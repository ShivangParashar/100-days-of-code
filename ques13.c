#include<stdio.h>

int main(){
    int a;
    printf("enter the year:");
    scanf("%d",&a);

    if(a%4==0 && a%100!=0){
        printf("the year is a leap year");
    }
    else if(a%400==0){
        printf("the year is a leap year");
    }
    else{
        printf("the year is not a leap year");
    }
    return 0;
    


}