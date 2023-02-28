#include<stdio.h>
int main()
{
    int marks[5]={55,77,89,43,90},i,max=marks[0];
    for(i=1;i<=4;i++)
    {
        if(max<marks[i]){
            max=marks[i];
        }
    }
    printf("%d\n",max);
    return 0;
}