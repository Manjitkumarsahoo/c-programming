#include<stdio.h>
int string(char x[]);

int main()
{
    char str[30];
    int len;
    printf("enter string :\n");
    gets(str);

    len=string(str);
    printf("length :%d",len);

}

int string(char x[])
{
    int i=0,count=0;
    while (x[i]!='\0')
    {
        count++;
        i++;
    }
    return count;
}