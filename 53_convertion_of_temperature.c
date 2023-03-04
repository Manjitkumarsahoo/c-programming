#include<stdio.h>
void main()
{
float c, f, ic, fi;
printf("Enter temperature in centigrade\n");
scanf("%f",&c);
f=1.8*c+32;
printf("Fahrenheit equivalent is %f", f);
printf("Enter temperature in Fahrenheit");
scanf("%f",&fi);
ic=(fi-32) / 1.8;
printf("Centigrade eqv. Is %f\n", ic);
}
