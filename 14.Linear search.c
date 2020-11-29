#include<stdio.h>
void main()
{
    int array[100],i,n,s,flag=0;
    printf("Enter number of element : ");
    scanf("%d",&n);
    printf("Enter the element : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Enter the element to search :");
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        if(array[i]==s)
        {
             printf("The element found at %d",i+1);
             flag=1;
        }
    }
    if(flag==0)
        printf("Element not found!!!!!");
}
