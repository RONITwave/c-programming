#include <stdio.h>
int main(){
    
    for(int i=1;i<=100;i++){
        if(i%2!=0){ 
        continue; //help to print the even no. upto 100
        }
         printf("%d \n",i);
    }
     return 0;
}