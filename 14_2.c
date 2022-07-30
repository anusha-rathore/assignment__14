#include<stdio.h>
int main()
{
    int a[10],i,sum=0;
    float avg;
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
    avg=(sum/10.0);
    printf("the average of numbers stored in an array  is %f",avg);
    

}