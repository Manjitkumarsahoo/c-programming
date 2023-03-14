#include<stdio.h>
void primefactor(int n,int factor)
{
    if(n==1)
    {
        return;
    }
    if(n%factor==0)
    {
        printf("%d",factor);
        primefactor(n/factor,factor);
    }
    else
    {
        primefactor(n,factor+1);
    }
}
int main()
{
    int n;
    printf("enter a positive integer :");
    scanf("%d",&n);
    printf("prime factor of is :");
    primefactor(n,2);
    return 0;
}