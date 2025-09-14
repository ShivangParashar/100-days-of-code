#include<stdio.h>
int main(){
      float sec,min,hr;
     float c;

      printf("enter the time in seconds:");
      scanf("%f",&sec);

      min=(float)60*sec;
      hr=(float)60*min;
      


      printf("the time will be %.2fhrs:%.2fmin:%.2fsec",hr,min,sec);
      return 0;

}