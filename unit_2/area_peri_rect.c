//area and perimeter of rectangle
#include<stdio.h>
int main(){
    int l,b,area,peri;
    const int a=2;
    //to enter length and breadth 
    printf("enter length and breadth \n");
    scanf("%d %d",&l,&b);
    //to calculate area and peri 
    area=l*b;
    peri=a*(l+b);
    // to print area and peri 
    printf("area is %d and perimeter is %d",area,peri);
    return 0;
}