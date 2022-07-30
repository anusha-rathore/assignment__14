#include<stdio.h>
int main()
{
    int a[10],i,max=0;
    printf("enter array element\n");

    for ( i = 0; i < 10; i++)
    {
        /* code */
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < 10; i++)
    {
        /* code */
        if (a[i]>max)
        {
            /* code */
            max=a[i];
        }
        
    }
    printf("the greatest number stored in an array %d",max);

}