#include<stdio.h>
int main (){
    int a,b,c;
    printf("enter three no: \n");
    scanf("%d%d%d",&a,&b,&c);
    // if else statement
    if (a>b && a>c)
    {        printf("%d is largest no \n",a);
    }
    else if (b>a && b>c)
    {        printf("%d is largest no \n",b);
    }
    else {
        printf("%d is largest no \n",c);
    }

    //Ternary 
    (a>b&&a>c)? printf("%d is largest no \n",a): (b>a && b>c) ?printf("%d is largest no \n",b): (c>a && c>b) ?  printf("%d is largest no \n",c): printf("all no are equal \n");
    return 0;
}