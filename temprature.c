#include<stdio.h>
#include<conio.h>
int main()
{
float cel,fer,kel;

printf("Enter Temperature in Fahrenheit :");
scanf("%f",&fer);

cel= 0.55 * (fer-32) ;
printf("Celsius = %f \n",cel);

kel = cel + 273.15 ;
printf("Kelvin  = %f \n",kel);

return (0) ;
}