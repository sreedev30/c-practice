#include<stdio.h>
void main()
{
int n,i,sum=0;
printf("enter the size of array:");
scanf("%d",&n);

int a[n];
printf("enter %d elements: ",n);
for(i=0;i<n;i++)
{
scanf("%d", &a[i]);
sum += a[i];
}

printf("sum of elements =%d",sum);
}
