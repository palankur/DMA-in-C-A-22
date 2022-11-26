//Write a program to read a one dimensional array, print sum of all elements along with inputted array elements using dynamic memory allocation
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,sum=0,*ptr;
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
        scanf("%d",ptr+i);
    }
    printf("The sum of numbers : ");
    for(i=0;i<n;i++)
    printf("%d ",*(ptr+i));
    for(i=0;i<n;i++)
    {
        sum=sum+*(ptr+i);
    }

    printf("is : %d ",sum);
    free(ptr);
    return 0;
}
