#include<stdio.h>
int main(){
    int a,b,c ;
    printf("enter the first number:");
    scanf("%d",&a);
    printf("enter the second number:");
    scanf("%d",&b);
    printf("enter the third number:");
    scanf("%d",&c);



    if(a>b && a>c){
        printf("%d is greatest",a);}
        else if (b>c && b>a){
            printf("%d is greatest",b);}
            else if (c>a && c>b){
                printf("%d is greatest",c);
            }
            return 0;
        }
    


