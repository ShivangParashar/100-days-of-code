#include <stdio.h>
int main(){
    float cost,sell;
    float profit,loss;
    printf("enter the cost price:\n");
    scanf("%f",&cost);

    printf("enter the sell price:\n");
    scanf("%f",&sell);
    profit=(sell-cost)/cost*100;
    loss=(cost-sell)/cost*100;

    if(cost>sell){
        printf("loss of %.2f %%",loss);
        // to print % use %% instead of %
    
        }
        else if(sell>cost){
            printf("profit of %.2f %%",profit);
        }
        return 0;
    }


