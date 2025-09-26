#include<stdio.h>
#include<ctype.h>
void main()
{
char num;
printf("enter a character:");
scanf("%c",&num);
if(isdigit(num))
{
printf("yes %c is a digit",num);
}
else
{
printf("noppp %c is not a digit ",num);
}
}

