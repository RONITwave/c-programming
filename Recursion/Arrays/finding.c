#include<stdio.h>
int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int x = 3;
    for(int i=0;i<=6;i++){
        if(arr[i]==x){
            printf(" \n%d is present in the array \n AND \n Its index is %d\n\n",x,i);
            break;
        }
    }

    return 0;
}