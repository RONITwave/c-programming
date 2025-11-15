#include<stdio.h>
int main(){
    int c;
    printf("Enter number of coloumns :");
    scanf("%d",&c);
    int r;
    printf("Enter number of rows :");
    scanf("%d",&r);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter the elements of the matrix %d:",i*c+j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n The matrix is : \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
          //  printf("Enter the elements of the matrix :");
            printf("%d ",arr[i][j]);
        }
          printf("\n");
    }
    return 0;
}