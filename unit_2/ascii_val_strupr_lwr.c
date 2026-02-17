//ascii value of a character and strupr and strlwr functions
#include<stdio.h>
int main(){
    char a[10],m;
    printf("enter a char \n");
    scanf("%c",&m);
    //to enter a string
    printf("enter a strings \n");
    fgets(a,sizeof(a),stdin);
    //to print ascii value of eacch string 
    printf("ascii value of a char is %d \n",m);
    //to convert string to upper case
    for (int i = 0; a[i] !='\0'; i++)
    {
        if (a[i]>='a' && a[i]<='z')
        {
            a[i]=a[i]-32;
        }
    }
    //OR
    int i=0;
    while (a[i] !='\0')
    {
        if (a[i]>='a' && a[i]<='z')
        {
            a[i]=a[i]-32;
        }
        i++;
    }
    printf("the string in upper case is %s",a);
    //into lower case 
     
    while (a[i] !='\0')
    {
        if (a[i]>='A' && a[i]<='Z')
        {
            a[i]=a[i]+32;
        }
        i++;
    } printf("the string in upper case is %s",a);
   return 0;
}