#include<stdio.h>
int main(){
    int n;
    printf("Enter the number row :");
    scanf("%d", &n);
    for( int i=1;i<=n;i++){
       int a=1;
    for( int j=1;j<=i;j++){ 
 //for reverse triangle use->> 
 
//  for( int j=1;j<=n+1-i;j++){       //<==THIS  

          printf("%d ",a);
            a++;

    }
    printf("\n");
    }
    return 0;
}