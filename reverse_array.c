#include<stdio.h>
void main()
{
int n,i;
printf("enter the size of array:");
scanf("%d",&n);
int a[n];
printf("enter %d elements:",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("array in rev order:\n");
for(i=n-1;i>=0;i--)
{
printf("%d\t",a[i]);
}
printf("\n");
}
