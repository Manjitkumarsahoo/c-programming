#include<stdio.h>
int main()
{
    int a,b, dev,*p1,*p2;
    p1=&a;
    p2=&b;
    printf("Enter two number");
    scanf("%d%d",p1,p2);

    dev=*p1/ *p2;

    printf("\ndevision of %d and %d is %d",*p1,*p2,dev);

    return 0;
}