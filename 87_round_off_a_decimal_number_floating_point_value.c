#include<stdio.h>

int roundoff(float n);

int main()
{
    float y;
    printf("Enter a floating point number");
    scanf("%f",&y);
    printf("Before round off y=%f",y);
    roundoff(y);
}

int roundoff(float n)
{
    int x;
    x=n+0;
    printf("After round off y=%d",x);
}