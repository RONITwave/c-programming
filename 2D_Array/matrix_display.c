#include<stdio.h>
int main(){

 //without giving rows number we can also declare our [3/3] of 2D matrix by just giving coloum number i.e.

    int arr[][3] = {{1,2,7},{3,4,8},{5,6,9}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}