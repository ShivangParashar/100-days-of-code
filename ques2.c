#include<stdio.h>

int main(){
    int a,b;
    float c;
    printf("enter the first number:");
    scanf("%d",&a);

    printf("enter the second number:");
    scanf("%d",&b);

    c=(float)a/b;
    // remember to divide a and b, always use (float)a/b
    
    if (b==0){
    printf("cant divide by zero");}

    
else {

    printf("the sum will be %d\n",a+b);
    printf("the diff will be %d\n",a-b);
    printf("the product will be %d\n",a*b);
    printf("the div will be %f\n",c);}

    

    return 0;
}