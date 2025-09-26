#include<stdio.h>
void main()
{
double num1,num2,num3;
printf("enter 3 number:");
scanf("%lf%lf%lf",&num1,&num2,&num3);
if(num1>=num2 && num1>= num3)
{
printf("the largest number is : %.2f ",num1);
}
else if(num2>=num1 && num2>=num3)
{
printf("the largest number is : %.2f ",num2);
}
else
{
printf("the largest number is : %.2f",num3);
}
}
