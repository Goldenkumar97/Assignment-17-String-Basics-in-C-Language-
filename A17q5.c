//5. Write a program to convert a given string into lowercase.
#include"stdio.h"
#include"string.h"
int main()
{
    char a[50];
    int i,count=0;
    printf("Enter charcter ");
    gets(a);
    for(i=0;i<a[i];i++)
    {
        if(a[i]> 64 && a[i] < 91)
        {
            a[i]=a[i]+32;
            printf("%c",a[i]);
        }
        else
        printf("%c",a[i]);
    
    }
    return 0;
}