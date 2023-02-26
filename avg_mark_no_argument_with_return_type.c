#include<stdio.h>
float tot_avg()
{
    int p=80,c=90,b=98,m=89,e=78,o=99,tm;
    float avg;
    tm=p+c+b+m+e+o;
    avg=tm/6;
    printf("total mark is %d\n",tm);
    return avg;
}
int main()
{
    printf("avg mark is %f",tot_avg());
    return 0;
}