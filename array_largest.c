#include<stdio.h>
void main()
{
int n,i,max;

printf("enter size of array:");
scanf("%d",&n);

int a[n];
printf("enter %d elements:");

for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(i=1;i<n;i++)
{
if(a[i]>max)
max=a[i];
}
printf("the largest element=%d\n",max);
}
