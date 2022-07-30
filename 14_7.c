#include<stdio.h>
int main()
{
    int a[10],i,second_greates_number,max=0;
    printf("enter array`s element\n");
    for ( i = 0; i <10; i++)
    {
        /* code */
        scanf("%d",&a[i]);
    }
    for ( i = 0; i <10; i++)
    {
        /* code */
        if (a[i]>max)
        {
          second_greates_number=max;
          max=a[i];
            /* code */
        }

        
    }
    printf(":second largest in an array is %d\n",second_greates_number);
    
    

}