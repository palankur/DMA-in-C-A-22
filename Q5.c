#include<stdio.h>           //Write a program to calculate the sum of n numbers entered by the user using malloc and free
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
