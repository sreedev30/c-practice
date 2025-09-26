#include<stdio.h>
#include<ctype.h>
void main()
{
char ch;
printf("enter a character:");
scanf("%c",&ch);
ch = tolower(ch);
if(ch=='a' || ch =='e' || ch=='i' || ch=='o' || ch=='u' )
{
printf("%c is a vowel.",ch);
}
else if((ch>='a'&&ch<='z') || (ch>='A' && ch<='Z'))
{
printf("%c is consonant.\n",ch);
}
else
{
printf("%c is not an alphabet",ch);
}
}
