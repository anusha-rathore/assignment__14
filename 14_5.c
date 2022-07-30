#include<stdio.h>
int main()
{
int smallest_element;
int arr[10],i;
printf("enter array`s elements\n");

for( i = 0;i<10;i++) 
{
scanf("%d",&arr[i]);
if(i==0)
{
    smallest_element=arr[i]; //smallest_element=arr[0];
}
else if(arr[i]<smallest_element)
{
smallest_element = arr[i];
}
}
printf("the smallest number stored in an array%d\n",smallest_element);
}