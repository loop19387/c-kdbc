#include<stdio.h>
int main(){
    float math,phy,chemb,bio,eng ,av;
    printf("enter marks of math,phy,chemb,bio,eng : \n");
    scanf("%f%f%f%f%f",&math,&phy,&chemb,&bio,&eng);
    //for average
    av=(math+phy+chemb+bio+eng)/5;  
    printf("the average is %f",av);
    return 0;
}