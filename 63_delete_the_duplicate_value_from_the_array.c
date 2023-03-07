#include<stdio.h>
int main()
{
    int arr[10],i,j,k,size;
    printf("entre the size of the array element\n");
    scanf("%d",&size);
    printf("enter the array element\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("the resultant array is\n");
    for(i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[j]==arr[i])
            {
                for(k=j;k<size;k++)
                {
                    arr[k]=arr[k+1];
                }
                size--;
                j--;
            }
        }
    }
    for(i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}