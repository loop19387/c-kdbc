#include<stdio.h>
int main (){
    int a=9,n;
    printf("pick a number between 1-10 :\n");
    // for recurring 
    while (n!=a){
         printf("enter your guess:\n");
        scanf("%d",&n);
        if (n==a){
            printf("success \n");
        }else if(n>a){
            printf("no is higher \n");
        }else{
            printf("no is lower \n");
        }
    }
    return 0;
}