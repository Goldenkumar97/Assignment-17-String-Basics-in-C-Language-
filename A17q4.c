//4. Write a program to convert a given string into uppercase.
#include"stdio.h"
#include"string.h"
int main()
{
    char a[50];
    int i=0,con=0;
    printf("Enter charcter ");
    gets(a);
    for(i=0;i<a[i];i++)
    {
        if( a[i] > 96 && a[i] < 123)
        {
            a[i]=a[i]-32;
            printf("%c",a[i]);
        }
        else
        printf(" %c",a[i]);
    
    }
    
    
    return 0;
}
