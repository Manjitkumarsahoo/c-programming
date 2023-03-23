# include<stdio.h>

int main ()
{
    int a,b;
    printf("enter the no and the power");
    scanf("%d%d",&a,&b);
    printf("%d to the power %d=%d",a,b,power(a,b));
}

int power (int a,int b)
{
    static int r=1;
    if(b==0)
    {
        return 1;
    }
    else
    {
        r=r*a;
        power(a,b-1);
        return r;
    }
}