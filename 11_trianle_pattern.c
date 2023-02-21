#include<stdio.h>
int main()
{
	int a,i,j;
	
	for(a=1;a<=5;a++)
	{
		for(i=4;i>=a;i--){
			printf(" ");
		}
		
		for(j=1;j<=a;j++){
			printf("* ");
		}
		
		printf("\n");
	}
	
	for(a=1;a<=5;a++)
	{
		for(j=2;j<=a;j++)
		{
			printf(" ");
		}
		
		for(i=5;i>=a;i--){
			printf("* ");
		}
		
		
		printf("\n");
	}
	
	return 0;
}