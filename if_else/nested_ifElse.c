#include <stdio.h>
int main()
{
    int n;
    printf("Enter number :");
    scanf("%d", &n);
    if (n % 5 == 0)
    {
        if (n % 3 == 0)
        {
            printf("number is divisible by 3 and 5");
        }
        else
        {
            printf("not divisible");
        }
    }
    else
    {
        printf("not divisible");
    }

    return 0;
}