#include<stdio.h>
int main()
{
    int arr[10],brr[10],i;
    printf("enter element\n");
    for ( i = 0; i <10; i++)
    {
     scanf("%d",&arr[i]);

    }
    for ( i = 0; i <10; i++)
    {
        brr[i]=arr[i];
    }
    printf("elements of real array: \n");
    for ( i = 0; i <10; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("elements of coped array: \n");
    for ( i = 0; i <10; i++)
    {
        printf("%d ",brr[i]);
    }
    

    
    
    }