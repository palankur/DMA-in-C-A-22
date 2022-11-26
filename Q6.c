//Write a program in C to find the largest element using Dynamic Memory Allocation.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,*ptr;
    ptr=(int*)malloc(sizeof(int));
    printf("The number size you want to enter : ");
    scanf("%d",&n);
    printf("Please enter the numbers : ");
    if(ptr==NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&ptr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(ptr[0]<ptr[i])
        {
            ptr[0]=ptr[i];
        }

    }
     printf("The greatest numbers among the given number is : %d",*ptr);
     free(ptr);
    return 0;
}
