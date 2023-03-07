#include<stdio.h>
int main(){
    int i,j,n;
    int a[10],temp;
    printf("enter the no of element in an array\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(i=0;i<n;++i)
    scanf("%d",&a[i]);
    {
        for(j=i+1;j<n;++j)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("the number in ascending order is:\n");
    for(i=0;i<n;++i)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}