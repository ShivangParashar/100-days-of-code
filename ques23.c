#include <stdio.h>
int main(){
    int day,fine;

    printf("enter the number of days:");
    scanf("%d",&day);
    if(day<=5){
        fine=day*2;
        printf("the fine will be %d$",fine);
    }
    else if(day <=10){
        fine=(5*2)+(day-5)*4;
        printf("the fine will be %d$",fine);
     }
     else if(day<=30){
        fine=(5*2)+(5*4)+(day-10)*6;
        printf("the fine will be %d$",fine);}
        
     
     else{
        printf("membership canceled");

     }
     return 0;
    }
    



