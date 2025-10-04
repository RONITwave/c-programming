#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    long long count=0;
    while (n !=0){
    n=n/10;
    count++;
}
printf("The count of your number is :%d", count);
return 0;

}