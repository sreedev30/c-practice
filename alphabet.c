#include<stdio.h>
void main()
{
char ch;
printf("enter a character:");
scanf("%c%",&ch);
if((ch>='A' && ch<='z')||(ch>='a' && ch<='z')) 
{
printf("yes entered character is a alphabet",ch);
}
else
{
printf("entered character is not a alphabet");
}
}

