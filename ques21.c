#include<stdio.h>
int main(){
    int number ;
    printf("enter the month number:");
    scanf("%d",&number);
    


    if(number==1){
        printf("January,31days");}
        else if(number==2){
            printf("February,28days");
        }
        else if(number==3){
        printf("March,31days");}
        else if(number==4){
            printf("April,30days");
        }
        else if(number==5){
            printf("May,31days");
        }
        else if(number==6){
            printf("June,30days");
    
        }
        else if(number==7){
            printf("July,31days");
        }
        else if(number==8){
            printf("August,31days");
        }
        else if(number==9){
            printf("September,30days");
        }
        else if(number==10){
            printf("October,31days");
        }
        else if(number==11){
            printf("November,30days");
        }
        else if(number==12){
            printf("December,31days");
        }
        else{
            printf("invalid");
        }

        
        
            return 0;
        }