#include<stdio.h>           //Write a program to ask the user to input a number of data values he would like to enter then create an array
#include<stdlib.h>          //dynamically to accommodate the data values. Now take the input from the user and display the average of data values.
int main()
{
    int *ptr,size,sum=0,i;
    printf("The number of data you want to enter : ");
    scanf("%d",&size);
    ptr=(int*)calloc(size,sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }
    printf("Please Enter the Values : ");
    for(i=0;i<size;i++)
    {
        scanf("%d",ptr+i);
    }
    for(i=0;i<size;i++)
    {
        sum=sum+*(ptr+i);
    }
    printf("Average of the numbers are : %d",sum/size);
    free(ptr);
    return 0;
}
