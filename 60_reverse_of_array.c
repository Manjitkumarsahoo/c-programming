#include<stdio.h>
int main()
{
    int arr[5]={11,22,33,44,55};
    int i=0,j=4,temp;
    printf("Before reverse the element of array is :\n");
    for(i=0;i<5;i++){
        printf("%d\n",arr[i]);
    }
    for(i=0;i<5;i++){
        while(i<j){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j--;
            i++;
        }
    }
    printf("After reverse the element of array is\n");
    for(i=0;i<5;i++){
          printf("%d\n",arr[i]);
    }
    return 0;
}