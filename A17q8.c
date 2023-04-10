//8. Write a program in C to copy one string to another string.
#include "stdio.h"
int main()
{
    int i;
    char str[50], b[50];
    printf("enter a string = ");
    gets(str);
    for (i = 0; i < str[i]; i++)
    {
        b[i] = str[i];
    }
    printf("another string is =%s", b);
    return 0;
}