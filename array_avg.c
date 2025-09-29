#include<stdio.h>
void main()
{
int i,n,sum=0;
float avg;
printf("enter the size of array:");
scanf("%d",&n);
int arr[n];
printf("enter %d elements:");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
sum += arr[i];
}
avg =  (float)sum/n;

printf("sum of elements =%d \n",sum);
printf("average of elements = %.2f \n",avg);
}
