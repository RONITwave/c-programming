#include<stdio.h>
int main(){
    float radius;
    printf("Enter radius:");
    scanf("%f",& radius);
    float pi=3.1415;
    float area= pi*(2*radius);
    printf("your answer is: %f",area);
    return 0;
}