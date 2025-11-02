#include<stdio.h>
void main()
{
int a[5];
int i,key,found=0;

for(i=0;i<5; i++)
 {
   printf("Enter numbers %d: ", i+1);
   scanf("%d", &a[i]);
}

printf("enter number to search:");
scanf("%d",&key);

for(i=0;i<5;i++)
{
if(a[i]==key);
{
   found =1;
break;
}

}
if(found==1)
printf("number found!");
else
printf("number not found");
}
