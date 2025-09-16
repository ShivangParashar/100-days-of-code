#include<stdio.h>
int main(){
    int a,b,c ;
    printf("enter the first side:\n");
    scanf("%d",&a);
    printf("enter the second side:\n");
    scanf("%d",&b);
    printf("enter the third side:\n");
    scanf("%d",&c);

    if(a==b && a==c && b==c){
        printf("the triangle will be an equilateral triangle");}
        else if(a==b && a!=c || a==c && a!=b || b==c && b!=a ){
            printf("the triangle will be an isosceles triangle");
        }
        else{
            printf("the triangle will be a scalene triangle");
        }
        return 0;
    }


        

        
    
    


    


   
