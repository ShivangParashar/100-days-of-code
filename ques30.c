#include<stdio.h>
int main(){
    int n;
    int remainder,reverse=0;
    printf("enter the number:");
    scanf("%d",&n);
    while(n!=0){
        remainder=n%10; //for last digit
        reverse=reverse*10+remainder; //for reverse number
        n=n/10; //to remove last digit
    }
    printf("the reversed number is %d\n",reverse);
    return 0;
}


    



    
        
    
