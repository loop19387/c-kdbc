#include<stdio.h>
int main(){
    int n,fact=1;
    printf("enter a no : \n");
    scanf("%d",&n);
    //for factorial
    for (int i = 1; i <= n ; i++)
    {
fact=fact*i;
    }printf("fact is %d",fact);
    return 0;
}