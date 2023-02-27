#include<stdio.h>
int main()
{
    int n,temp=0,r,sum=0;
    printf("Enter a three digit number\n");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(temp==sum)
    {
        printf("%d is a amstrong number",temp);
    }
    else
    {
        printf("%d is not a amstrong number",temp);
    }
    return 0;
}