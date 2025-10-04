#include<stdio.h>
int main(){
    float x;
    printf("Enter your float number :");
    scanf("%f",&x);
    int y=x;
    //printf("%d",y);
    float z=y-x;
    printf("Your fractional number is :%.2f%%\n",z);
    return 0;
}