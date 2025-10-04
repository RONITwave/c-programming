

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    float a=100;
    for (int i = 1; i <= n; i++)
    {
        printf("%.2f ", a);
        printf(",");
        a=a/2;
    }
    return 0;
}