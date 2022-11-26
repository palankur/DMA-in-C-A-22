//Write a program to demonstrate dangling pointers in C.
#include<stdio.h>
#include<stdlib.h>
f1()
{
    int *ptr;
    ptr=(int*)malloc(sizeof(int));
    *ptr=10;
    printf("Before dangling is : %d",*ptr);
    free(ptr);
    printf("After dangling is : %d",*ptr);
}
int main()
{
    f1();
    return 0;
}
