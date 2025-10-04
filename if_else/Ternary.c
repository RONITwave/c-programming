#include<stdio.h>
int main(){
    int x;
    printf("Enter your number: ");
    scanf("%d", &x);
    //Using Ternary function

    x%2==0 ? printf("Even Number") :  printf("Odd number") ;


    // if (x%2==0){
    //     printf("Even Number ");
    // }
    //     if (x%2!=0){
    //         printf("Odd number");
    //     }
    return 0;
}