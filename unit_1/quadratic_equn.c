#include<stdio.h>
#include<math.h>
int main (){
    int a,b,c,d;
    float r1,r2;
    printf("enter the coff of quadratic equn \n");
    scanf("%d%d%d",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if (d>0)
    {
        r1=-b+sqrt((b*b)-(4*a*c))/(2*a);
        r2=-b-sqrt((b*b)-(4*a*c))/(2*a);
        printf("the roots are real and distinct %f and %f",r1,r2);
    }else if (d==0)
    {
        r1=-b/(2*a);
        printf("the roots are real and equal %f",r1);
    }else
    {
        printf("the roots are imaginary");
    }
    return 0;

}