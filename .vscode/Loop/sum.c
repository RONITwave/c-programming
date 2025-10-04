#include<stdio.h>
int main(){
    int n;
    printf("Enter THE number you want to add :");
    scanf("%d",&n);
    int sum=0;
    int last_digit ;
    while (n !=0){
        last_digit=n%10;
        sum=sum+last_digit;
        n=n/10;
    
}
printf("The sum of your digit is :%d ", sum);
return 0;

}