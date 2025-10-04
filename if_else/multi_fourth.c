#include <stdio.h>

int main() {
    int a,b,c;
    
    
    printf("enter number for a :");
    scanf("%d", &a);
    printf("enter sec no for b :");
    scanf("%d", &b);
    printf("enter third no for c :");
    scanf("%d", &c);
    if (a>b && a>c){
        printf("%d is greater no\n", a);
    }
    if (b>a && b>c){
        printf("%d is greater\n", b);
    }
    if (c>a && c>b){
        printf("%d is greater\n", c);
        
    }

    return 0;
}