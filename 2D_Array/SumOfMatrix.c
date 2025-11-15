#include<stdio.h>
int main(){
    int r;
    printf("Enter number of rows :");
    scanf("%d",&r);
    int c;
    printf("Enter number of coloumns :");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n The sum of matrix is : \n");
    int sum = 0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum += arr[i][j];
        }
    }
    printf("%d ", sum);
    return 0;
}