#include<stdio.h>
int main()
{
 int a,b,mul,*p1,*p2;

 p1=&a;
 p2=&b;
 printf("Enter two number");
 scanf("%d%d",p1,p2);
 mul=*p1**p2;
 printf("\n\nProduct of %d and %d is %d",*p1,*p2,mul);
 return 0;
}

