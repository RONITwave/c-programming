#include<stdio.h>
int main(){
    int marks[8] = {45,67,23,89,12,90,34,22};
    for (int i=0;i<8;i++){
        printf("%d ",i);
        if (marks[i]<35){
            printf("fail\n");
        }
            else{
                printf("pass\n");
        }
    }
        return  0;
}