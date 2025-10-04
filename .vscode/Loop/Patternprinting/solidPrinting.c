#include<stdio.h>
int main(){
    int n;
    printf("Enter the number row :");
    scanf("%d", &n);
    int m;
    printf("Enter of number coloum :");
    scanf("%d", &m);
    for( int i=1;i<=n;i++){ // no of lines
        for(int i=1;i<=m;i++){ // no of this in one line
          printf("*");
    }
    printf("\n");
}
    return 0;
}