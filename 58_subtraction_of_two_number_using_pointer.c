#include<stdio.h>
int main()
{
    int a,b,sub,*p1,*p2;
    p1=&a;
    p2=&b;
    printf("Enter two number");
    scanf("%d%d",p1,p2);
    sub=*p1-*p2;
     printf("\nsubrtaction of %d and %d is %d",*p1,*p2,sub);

     return 0;
}