#include<stdio.h>
void main()
{
double num1,num2;
printf("enter first number:");
scanf("%lf",&num1);
printf("enter second number:");
scanf("%lf",&num2);
if (num1<num2)
{
printf("the smallest number is : %lf ",num1);
}
else if (num2<num1)
{
printf("the smallest number is : %lf ",num2);
}
else
{
printf("both numbers are equal");
}}
