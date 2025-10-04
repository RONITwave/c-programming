#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    if(n%5==0 || n%3==0){
        printf("The number is divisible by one of them 3 or 5 ");
    }
    else {
        printf("number, is not divisible by any of them 3 or 5 ");
    }
    return 0;
}