#include<stdio.h> 
int main (){
    int a=0,b=1,c=0,n;
    printf("enter the no to cont fibonacce series from:\n");
    scanf("%d",&n);
    printf(" fibonacce series will be carried  from:%d\n",n);
    //for fibonacce series
    printf("%d%d",a,b);
    c=a+b;
    for (int i = 0; i <= n; i++)
    {
        printf("%d",c); 
      a=b;
      b=c;
      c=a+b;
    }
    return 0;
    
}