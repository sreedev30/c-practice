#include<stdio.h>
void main()
{
int n;
long long product=1;
printf("enter n:");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{product *= i;
}
printf("product of first %d natural number is : %d",n,product);
}

