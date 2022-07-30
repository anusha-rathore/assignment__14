#include<stdio.h>
int main()
{
    int a[10],i,j ,temp;
    printf("enter array element\n");

    for ( i = 0; i < 10; i++)
    {
        /* code */
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < 10; i++)
    {
        /* code */
    for ( j = i+1; j <10 ; j++)
    {
        /* code */
        if (a[i]>a[j])
        {
            /* code */
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        
    }
    

    }
    for ( i = 0; i <10; i++)
    {
        /* code */
        printf("%d ", a[i]);
    }
    
    

}