#include<stdio.h>

int main()
{
    int n;
    printf("Enter the term which to be printed");
    scanf("%d",&n);
    fibonaci(n);
    printf("Fibonaci is %d",fibonaci(n));
}

int fibonaci (int p)
{
    int num;
    if(p==1 || p==0)
    return p;
    else
    {
        num=fibonaci(p-1)+fibonaci(p-2);
        return num;
    }
}