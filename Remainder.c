#include<stdio.h>
int main(){
    int a,b; // a>b
    printf("Enter Dividend :");
    scanf("%d",&a);
    printf("Enter divisor :");
    scanf("%d",&b);
    //---------int q = a/b;
    //-------int r=a-b+q; // Divisor*quotient+Remainder = dividend
    int r=a%b;
    printf("Your the remainder whenv %d is divided by %d is : %d",a,b,r);
    return 0;
}