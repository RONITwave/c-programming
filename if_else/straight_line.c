#include <stdio.h>
int main()
{
    double x1, x2, x3, y1, y2, y3;
    printf("Enter vale for x1 :");
    scanf("%lf", &x1);
    printf("Enter vale for y1 :");
    scanf("%lf", &y1);
    printf("Enter vale for x2 :");
    scanf("%lf", &x2);
    printf("Enter vale for y2 :");
    scanf("%lf", &y2);
    printf("Enter vale for x3 :");
    scanf("%lf", &x3);
    printf("Enter vale for y3 :");
    scanf("%lf", &y3);
    double m1,m2;

    
    m1=((y2-y1)/(x2-x1));
    m2=((y3-y2)/(x3-x2));
    if(m1==m2){
        printf("it is a straight line ");
    }
    else{
        printf("NO, it is not a straight line ");
    }
    return 0;
}