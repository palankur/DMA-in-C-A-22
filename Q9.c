//Write a program to allocate memory dynamically of the size in bytes entered by the user. Also handle the case when memory allocation is failed.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,*ptr;
    printf("The the size in bytes you want to enter : ");
    scanf("%d",&n);
    ptr=(int*)malloc(n);
    if(ptr==NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }
    return 0;
}
