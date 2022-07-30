#include<stdio.h>
int main()
{
    int a[10],i,sum=0;
    printf("enter array element\n");

    for ( i = 0; i < 10; i++)
    {
        /* code */
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < 10; i++)
    {
        /* code */
        sum=sum+a[i];

    }
 printf("the sum of numbers stored in an array is %d",sum);    

    

}