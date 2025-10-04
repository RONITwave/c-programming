// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter a number :");
//     scanf("%d", &n);
//     for(int i=2;i<=n-1;i++){
//         if(n%i==0){
//             printf("giving no is composite \n");
//             break;
//         }
//     }
//      return 0;
// }

#include <stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    int a=0;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){ // i is a factor of n
            a =1;
            break;
        }
    }
    if(n==1) printf(" 1 is neither prime nor composite ");
    if (a==0) printf("giving no is prime \n");
    else printf("giving no is composite \n");

     return 0;
}