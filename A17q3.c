//3. Write a program to count vowels in a given string.
#include"stdio.h"
int main()
{
    char name[50];
    int i,count=0;
    printf("Enter any charcter ");
    gets(name);
    for(i=0;i<name[i];i++)
    {
        if( name[i]=='a' || name[i]=='e'||name[i]=='i' || name[i]=='o'|| name[i]=='u' || name[i]=='A'||name[i]=='E' || name[i]=='I'||name[i]=='O' || name[i]=='U')
    count ++;
    }
    printf("vowel count :%d",count);
return 0;
}