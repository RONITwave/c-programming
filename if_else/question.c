#include<stdio.h>
int main(){
    int cost_price;
    printf("Enter cost price :");
    scanf("%d", &cost_price);
    int selling_price;
    printf("Enter selling price :");
    scanf("%d", &selling_price);

    if (cost_price<selling_price){
        printf("profit");
    }
    if (cost_price>selling_price) {
        printf("loss");
    }
    if (cost_price==selling_price){
        printf("no profit , no loss");
    }
    return 0;
    
}