#include<stdio.h>
int main(){
    int y;
    printf("enter your number :");
    scanf("%d", &y);
    if (y%5==0){
        printf("yess divisible by 5");

    }
    else{
        printf("Nope, not divisible by 5");
    }
    return 0;
}
