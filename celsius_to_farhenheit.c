#include<stdio.h>
void main()
{
float celsius,fahrenheit;
printf("enter temperature in celsius :");
scanf("%f",&celsius);
fahrenheit = (celsius * 9/5) +32 ;
printf("temperature in fahrenheit: %.2f " ,fahrenheit );
}
