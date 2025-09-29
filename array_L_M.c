#include<stdio.h>
void main()
{
int n,i,min,max;
printf("enter the size of array:");
scanf("%d",&n);
int a[n];
printf("enter %d elements:");
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
}
max=min=a[0];
for(i=1;i<n;i++)
{
if(a[i]>max)
max=a[i];
if(a[i]<min)
min=a[i];
}
printf("largest element is :%d\n",max);
printf("smallest element is :%d\n",min);
}
