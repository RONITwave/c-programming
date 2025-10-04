#include<stdio.h>
int main(){
    int n;
    printf("Enter the number row :");
    scanf("%d", &n);
    for( int i=1;i<=n;i++){ 

    for( int j=1;j<=n+1-i;j++){  

    // for( int j=1;j<=n+1-i;j++){     //<--THIS IS FOR REVERSE PRINTING

          printf("%d ",j);
    }
    printf("\n");
    }
    return 0;
}