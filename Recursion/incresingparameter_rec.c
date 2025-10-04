#include<stdio.h>
void incre(int x, int n){
    if(x>n) return;
    printf("%d\n",x);
    incre(x+1,n);
    return;
}
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    incre(1,n);
    return 0;

}