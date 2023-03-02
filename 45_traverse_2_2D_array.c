#include<stdio.h>
int main()
{
	int m1[3][3]={{11,22,33},{44,55,66},{77,88,99}},a,i;
	int m2[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int m3[3][3];
	
	printf("m1 matrix is : \n");
	for(a=0;a<=2;a++)
	{
		for(i=0;i<=2;i++)
		{
			printf("%d  ",m1[a][i]);
		}
		printf("\n");
	}
	
	printf("\nm2 matrix is : \n");
	for(a=0;a<=2;a++)
	{
		for(i=0;i<=2;i++)
		{
			printf("%d  ",m2[a][i]);
		}
		printf("\n");
	}
	for(a=0;a<=2;a++)
	{
		for(i=0;i<=2;i++)
		{
			m3[a][i]=m1[a][i]+m2[a][i];
		}
		
	}
	printf("\nm1 + m2 =  : \n");
	for(a=0;a<=2;a++)
	{
		for(i=0;i<=2;i++)
		{
			printf("%d  ",m3[a][i]);
		}
		printf("\n");
	}
	
	return 0;
}

