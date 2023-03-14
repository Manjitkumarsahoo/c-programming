#include<stdio.h>
int main()
{
    int choice,num,i,fact;
    while(i)
    {
        printf("\n1.factorial\n");
        printf("2.prime\n");
        printf("3.odd/even\n");
        printf("4.exit\n");
        printf("enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("\n enter number :");
            scanf("%d",&num);
            fact=1;
            for(i=1;i<=num;i++)
            fact=fact*i;
            printf("factorial value =%d\n",fact);
            break;
            case 2:
            printf("\n enter number");
            scanf("%d",&num);
            for(i=2;i<num;i++)
            {
                if(num%i==0)
                {
                    printf("not a prime no\n");
                    break ;
                }
            }
            if(i==num)
            printf("prime no\n");
            break ;
            case 3:
            printf("enter no\n");
            scanf("%d",&num);
            if(num%2==0)
            printf("even no\n");
            else
            printf("odd no\n");
            break ;
            case 4:
            exit(0);
            default:
            printf("wrong choice!\a\n");
        }
    }
    return 0;
}