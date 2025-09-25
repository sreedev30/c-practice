#include<stdio.h>
void main()
{
int a,b,temp;
printf("enter first number:");
scanf("%d",&a);
printf("enter second number:");
scanf("%d",&b);
temp =a;
a=b;
b=temp;

printf("after swapping : a = %d , b= %d ",a,b);
}
