//WAP to calculate the lenghth of the string(Without using built-in method).
#include"stdio.h"
#include"string.h"
int main()
{
    char name[30];
    int i=0,count=0;
    printf("Enter Name ");
    gets(name);
    while(name[i]!=0)
    {
        count ++;
        i++;
    }
    printf("length of name is =%d",count);
    return 0;
}
