//7. Write a program in C to count the total number of alphabets, digits and special characters in a string.
#include"stdio.h"
#include"string.h"
int main()
{
    char name[50];
    int i;
    int count=0,temp=0,digit=0;
    printf("Enter any string ");
    gets(name);
    for(i=0;i<=name[i];i++)
    {
        if(name[i]>='a' && name[i]<='z' || name[i]>='A' && name[i]<='Z')
        count++;
        else if( name[i] >= '0' && name[i]<= '9')
        temp++;
        else
        digit++;
    }
    printf("Alphabet is ==> %d",count);
    printf("\nDigit is ==> %d",temp);
    printf("\nSpecial charcter is ==> %d",digit);
    return 0;
}