#include<stdio.h>
int main()
{
    int a[10],i,sum_odd=0,sum_even=0;
    printf("enter array element\n");

    for ( i = 0; i < 10; i++)
    {
        /* code */
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < 10; i++)
    {
        /* code */if (a[i]%2==0)
        {
            /* code */
        
        sum_even=sum_even+a[i];
        }
        else
        sum_odd=sum_odd+a[i];
    }
 printf("the sum of even numbers stored in an array is %d\n",sum_even);    
 printf("the sum of odd numbers stored in an array is %d",sum_odd);    

    

}