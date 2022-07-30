#include<stdio.h>
int main()
{
    int arr[10],i;
    printf("enter array`s element\n");
    for ( i = 0; i <=9; i++)
    {
        /* code */
        scanf("%d",&arr[i]);

    }
    printf("The values store into the array in reverse are \n");
    for ( i = 9; i >=0; i--)
    {
        /* code */
        printf("%d ",arr[i]);

    }
    
}