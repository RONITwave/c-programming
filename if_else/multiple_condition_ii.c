#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    if (n % 5 == 0 && n % 3 == 0)
    {
        printf("yess, it is divisible by 3 or 5 ");
    }
    else
    {
        printf("no, is not divisible by 3 or 5 ");
    }
    return 0;
}