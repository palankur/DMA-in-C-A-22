#include<stdio.h>           //Write a program to input and print text using dynamic memory allocation
#include<stdlib.h>
int main()
{
    int i=0;
    char *ptr,s;
    ptr=(char*)malloc(sizeof(char));
    printf("enter string : ");

    while(s!='\n')
    {
        s=getc(stdin);
        ptr[i]=s;
        i++;
    }
    ptr[i]='\0';
    printf("%s",ptr);
    free(ptr);
    return 0;
}

