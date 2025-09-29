#include<stdio.h>
void main()
{
int n,i,key,found=0;
printf("enter the size of array:");
scanf("%d",&n);
int a[n];
printf("enter %d elements:");
for(i=0;i<n;i++)
{
scanf("%d", &a[i]);
}
printf("enter the elements to search:");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if (a[i] == key)
{
printf("elements %d found at position %d (index %d)\n",key,i+1,i);
found =1;
break;
}
}
if ( !found)
printf("elements %d not found in the array \n");
}

