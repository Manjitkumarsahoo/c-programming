#include<stdio.h>
int main()
{
	int arr[5]={44,55,66,77,88},i,sum=0;
	
	for(i=0;i<=4;i++){
		sum=sum+arr[i];
	}
	
	printf("%d\n",sum);
	
	return 0;
}
