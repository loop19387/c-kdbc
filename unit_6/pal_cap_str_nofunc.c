#include<stdio.h>
#include<string.h>
int main()
{
  char a[10],b[10]; int len;
  printf("enter a string val :");
  fgets(a,sizeof (a),stdin);
  //to cal length 
  len=strlen(a);
  //last val is \0
  //for reverse
  for (int i = len-1; i >=0; i--)
  {
    b[i]=a[i];
  }
  //end of string 
   b [len]='\0';
   //comparing both string
    if (strcmp(a,b)==0){
      printf("=palindrome \n");
    }else {
      printf("not \n"); 
  }
  for (int i = 0; i <len; i++)
  {
    if (a[i]>='a' && a[i]<='z'){
       a[i]=a[i]-32;
       printf("%c",a[i]);
    }
  }
  return 0;
}