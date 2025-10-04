#include<stdio.h>
int stair(int m){
    if(m<=2) return m;
    int totalways = stair(m-1) + stair(m-2);
    return totalways;
}
int main(){
int n;
printf("Enter a number : ");
scanf("%d",&n);
int ways = stair(n);
printf(" %d ",ways);
return 0;
}