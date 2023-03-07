#include<stdio.h>
int main()
{
    int arr[20],i,j,size,temp;
    printf("enter the size of the array element");
    scanf("%d",&size);
    printf("enter the elements\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("the second largest element is:%d",arr[1]);
    return 0;
}