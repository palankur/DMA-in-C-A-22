//Write a program to demonstrate memory leak in C.
#include<stdio.h>
#include<stdlib.h>
f1()
{
    int *ptr;
    ptr=(int*)malloc(sizeof(int));
    ptr=NULL;
}
int main()
{
    f1();
    return 0;
}
