#include <stdio.h>
int main(){
int n,remainder,sum=0;
printf("enter the number:");
scanf("%d",&n);
while(n!=0){
    remainder=n%10;
    sum=sum+remainder;
    n/=10;

}
printf("the sum of digits will be %d",sum);
    
return 0;
}