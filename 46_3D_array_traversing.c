#include<stdio.h>
int main()
{
	int m1[2][3][3]={{{11,22,33},{44,55,66},{77,88,99}},{{1,2,3},{4,5,6},{7,8,9}}},a,i,j;

	for(a=0;a<=1;a++)
	{
		for(i=0;i<=2;i++)
		{
			for(j=0;j<=2;j++)
			{
				printf("%d ",m1[a][i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
		
	return 0;
}
