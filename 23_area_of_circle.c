#include<stdio.h>
int main()
{
    float area,radius,pi=3.14;
    printf("Enter the radius\n");
    scanf("%f",&radius);
    area=pi*radius*radius;
    printf("The area of circle is %f",area);
    return 0;
}