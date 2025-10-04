#include<stdio.h>
int main(){
    int y;
    printf("Enter year :");
    scanf("%d", &y);
    if (y%4==0){
        printf("leap year");
    }
        if(y%4!=0){
            printf("not a leap year");
    }
    
}