#include<stdio.h>

int main(){
    int length,breadth;
    int perimeter;
    int area;


    printf("enter the length:");
    scanf("%d",&length);

    printf("enter the breadth:");
    scanf("%d",&breadth);
    perimeter=2*(length+breadth);
    area=length*breadth;

    printf("the perimeter of rectangle will be %d\n",perimeter);
    printf("the area of rectangle will be %d\n",area);
    return 0;
}








    

    