#include<stdio.h>
int main()
{
	int m1[2][3][3]={{{10,20,30},{40,50,60},{70,80,90}},{{1,2,3},{4,5,6},{7,8,9}}},a,i,j;
	int m2[2][3][3]={{{11,12,13},{14,15,16},{17,18,19}},{{70,71,72},{73,74,75},{76,77,78}}};
	int m3[2][3][3];
    printf("M1 matrix is : \n");
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
	printf("M2 matrix is : \n");
	for(a=0;a<=1;a++)
	{
		for(i=0;i<=2;i++)
		{
			for(j=0;j<=2;j++)
			{
				printf("%d ",m2[a][i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
	for(a=0;a<=1;a++)
	{
		for(i=0;i<=2;i++)
		{
			for(j=0;j<=2;j++)
			{
				m3[a][i][j]=m1[a][i][j]+m2[a][i][j];
			}	
		}	
	}
	printf("M3 matrix is : \n");
	for(a=0;a<=1;a++)
	{
		for(i=0;i<=2;i++)
		{
			for(j=0;j<=2;j++)
			{
				printf("%d ",m3[a][i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}


