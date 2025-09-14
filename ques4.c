#include<stdio.h>

int main(){
    int radius;
    float area,circumference;

    printf("enter the radius:");
    scanf("%d",&radius);

    area=3.14*radius*radius;
    circumference=2*3.14*radius;

    printf("the circumference of circle is %.2f\n",circumference);
    // use %.2f for two decimal places 
    printf("the area of circle is %.2f\n",area);
return 0;
}




    



  