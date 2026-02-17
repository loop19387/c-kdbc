#include<stdio.h>
int main (){
    int n,temp=0;
    printf("enter the size of array : \n");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of array : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    // for descending order
    for (int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++){
           if (a[i]<a[j])
           {
                temp=a[i];
                a[i]=a[j];
               a[j]=temp;
           }
        }
        // displaying the array in descending order
        for (int i = 0; i < n; i++)
        {
            printf("%d ",a[i]);
        }
        printf("\n");
        printf("the max no is %d \n",a[0]);
        printf("the min no is %d \n",a[n-1]);
        return 0;
        
    }}