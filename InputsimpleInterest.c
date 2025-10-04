#include <stdio.h>
int main(){
    float RATE,TIME,PRINCIPAL,si;
    printf("ENTER PRINCIPAL:");
    scanf("%f",&PRINCIPAL );
    printf("ENTER RATE:");
    scanf("%f",&RATE);
    printf("ENTER TIME:");
    scanf("%f",&TIME);
    si = (PRINCIPAL*RATE*TIME)/100;
    printf("YOUR INTEREST IS : %f",si);
    return 0;
}