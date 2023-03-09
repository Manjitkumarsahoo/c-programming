#include<stdio.h>
int main()
{
    char string[20];
    int i,length=0,flag=0;
    printf("enter the string");
    scanf("%s",string);

    for(i=0;string[i]!='\0';i++)
    {
        length ++;
    }

    for(i=0;i<length;i++)
    {
        if(string[i]!=string[length-1-i])
        {
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("string is palindrom\n");
    }
    else
    {
        printf("string is not palindrom");
    }

    return 0;

}