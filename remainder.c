#include<stdio.h>
void main()
{
int num1,num2,rem;
printf("enter first number:");
scanf("%d",&num1);
printf("enter second number:");
scanf("%d",&num2);
if (num2 !=0)
{
rem=num1 % num2;
printf("remainder : %d ", rem);
}
else{
printf("divison by 0 is not allowed");
}
}
