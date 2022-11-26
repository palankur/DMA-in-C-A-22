#include<stdio.h>                           //Write a program to find the number of vowels in each of the 5 strings stored in two dimensional arrays, taken from the user.
#include<stdlib.h>
int main()
{
    int i=0,j=1;
    char *ptr,s;
    ptr=(char*)malloc(sizeof(char));
    printf("enter string : ");

    while(s!='\n')
    {
        s=getc(stdin);
        j++;
        ptr=(char*)realloc(ptr,j*sizeof(char));
        ptr[i]=s;
        i++;
    }
    ptr[i]='\0';
    printf("%s",ptr);
    free(ptr);
    return 0;
}
