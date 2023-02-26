#include<stdio.h>
void tot_avg(int p,int c,int b,int m,int e,int o)
{
    int tm;
    float avg;
    tm=p+c+b+m+e+o;
    avg=tm/6;
    printf("total mark is %d\n",tm);
    printf("avg_mark is %f",avg);
}
int main()
{
    tot_avg(80,90,98,89,78,99);
    return 0;
}