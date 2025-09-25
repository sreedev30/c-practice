#include<stdio.h>
void main()
{
int base,exponent;
long long result =1;
printf("enter the base:");
scanf("%d",&base);
printf("enter the exponent:");
scanf("%d",&exponent);

for(int i=1;i<=exponent;i++)
{
result*=base;
}
printf("%d raised to the power %d is :%11d",base,exponent,result);
}
