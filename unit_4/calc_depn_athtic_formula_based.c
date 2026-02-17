#include<stdio.h>
int main (){
    float cost,price,salvage_life,useful_life,dep;
    printf("enter cost,price,salvage life,useful life,depritiation \n");
    scanf("%f%f%f%f%f",&cost,&price,&salvage_life,&useful_life,&dep);
    // for depritiation
    dep = (cost-salvage_life)/salvage_life;
    printf("the depritiation is %f",dep);
    return 0;
}