#include<stdio.h>
#include<ctype.h>
void main()

{
char ch;
printf("enter a character:");
scanf("%c",&ch);
if (isalpha(ch))
{
printf("yes (%c) character is a alphabet",ch);
}
else
{
printf(" (%c)is not a alphabet",ch);
}
}

