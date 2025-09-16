#include <stdio.h>
#include <math.h>

int main(){
    float D,root1,root2;
    int a,b,c;
    
    printf("enter a:\n");
    scanf("%d",&a);
    printf("enter b:\n");
    scanf("%d",&b);
    printf("enter c:\n");
    scanf("%d",&c);
    D=b*b-4*a*c;
    root1=(-b+sqrt(D))/(2*a);
    root2=(-b-sqrt(D))/(2*a);



    if(D>0){
        printf("roots are real and distinct\n");
        printf("the roots are %.2f,%.2f",root1,root2);
    }
    else if (D==0){
        printf("roots are real and equal\n");
        printf("the roots are %.2f,%.2f",root1,root2);
    }
    else if (D<0){
        printf("roots are complex\n");
    }
    return 0;
}
    


    




