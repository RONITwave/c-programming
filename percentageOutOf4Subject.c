#include<stdio.h>
int main(){
    float m1 =40; //maths
    float m2 =39; //physics
    float m3 =20; //english
    float m4 =10; //chemistry
    float p = (m1 + m2 + m3 + m4)/160*100;
    printf("your percentage is: %.2f%%\n",p);
    return 0;
}