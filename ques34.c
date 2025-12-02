#include <stdio.h>
int main(){
int n,not_prime=0;
printf("enter the number:");
scanf("%d",&n);
if (n==1 ||n==0 ){
    not_prime=1;
}
else{
for (int i=2;i<n;i++){
    if(n%i==0 && n!=2){
        not_prime=1;
    }
}}
if(not_prime){
    printf("%d is not prime",n);
}
else 
printf("%d will be prime",n);    
return 0;
}