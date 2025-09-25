#include<stdio.h>
void main()
{
float principal,rate,year,interest;
printf("enter principal amount :");
scanf("%f",&principal);
printf("enter the rate of interest:");
scanf("%f",&rate);
printf("enter no of year:");
scanf("%f",&year);
interest =((principal * rate * year)/100);
printf("simple interest = %.2f", interest);
}
