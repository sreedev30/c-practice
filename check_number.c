#include<stdio.h>
void main()
{
float a;
printf("enter a number to check +ve,-ve,0:");
scanf("%f",&a);
if(a>0)
{
printf("postive");
}
else if(a<0)
{
printf("negative");
}
else
{
printf("zero");
}
}
