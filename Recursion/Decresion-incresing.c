#include<stdio.h>
void incre_desc(int n){
 printf("%d\n",n); 
    if(n<=0) return;
 incre_desc(n-1);
 printf("%d\n",n);  
 return; 
}
int main(){
    int n;
    printf("Enter your number : ");
    scanf("%d",&n);
    incre_desc(n);
    return 0;
}