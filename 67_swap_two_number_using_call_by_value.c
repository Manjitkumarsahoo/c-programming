#include<stdio.h>
void swap(int x,int y);
int main()
{
   int a=11,b=21;
   swap(a,b);
   printf("a=%d b=%d\n",a,b);
   return 0;
}
void swap(int x,int y)
{
    int t;
    t=x;
    x=y;
    y=t;
    printf("x=%d y=%d\n",x,y);
}
