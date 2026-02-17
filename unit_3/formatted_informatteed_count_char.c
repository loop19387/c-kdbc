//to use formatted output and unformatted input
#include<stdio.h>
int main(){
    char a[10];
    int count =0; 
    printf("enter the set of letters : \n");
    fgets(a,sizeof(a),stdin);
    printf("%s \n",a);
    // to count space and alphabets
    for (int i = 0; a[i] != '\0' ; i++){
       
            count ++;
      
        
    }printf("%d amt of letters",count);
    return 0;
}