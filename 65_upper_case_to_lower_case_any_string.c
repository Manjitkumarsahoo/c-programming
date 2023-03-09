#include<stdio.h>
int main()
{
    char str[20];
    int i;
    printf("enter the string\n");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            str[i]=str[i]+32;
        }
    }
    printf("lower case string is %s",str);

    return 0;
}