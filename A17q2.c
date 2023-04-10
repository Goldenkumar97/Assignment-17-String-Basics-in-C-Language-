//2. Write a program to count the occurrence of a given character in a given string.
#include"stdio.h"
#include"string.h"
int main()
{
     char a[30];
     char b;
     int i=0,count=0;
     printf("Enter Name ");
     gets(a);
     printf("Enter occurance in name ");
     scanf("%c",&b);
     for(i=0;i<a[i];i++)
     {
          if(a[i]==b)
          {
               count++;
          }
     }
     printf("occurence charcter is =%d",count);
     return 0; 
}