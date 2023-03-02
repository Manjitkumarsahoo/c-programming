#include<stdio.h>
int main()
{
	int arr[3][3]={{11,22,33},{44,55,66},{77,88,99}},a,i;
	
	for(a=0;a<=2;a++)
	{
		for(i=0;i<=2;i++)
		{
			printf("%d  ",arr[a][i]);
		}
		printf("\n");
	}
	
	return 0;
}