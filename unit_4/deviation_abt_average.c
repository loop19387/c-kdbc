#include<stdio.h>
int main (){
    float n1,n2,n3,av,dev1,dev2,dev3;
    printf("enter three no :\n");
    scanf("%f%f%f",&n1,&n2,&n3);
    //for average 
    av=(n1+n2+n3)/3;
    //for deviation 
    dev1 =n1-av;
    dev2 =n2-av;
    dev3 =n3-av;
    printf("the average is %f \n",av);
    printf("the average is %f \n",dev1);
    printf("the average is %f \n",dev2);
    printf("the average is %f \n1",dev3);
    return 0;
}