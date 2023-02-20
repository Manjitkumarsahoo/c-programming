#include<stdio.h>
int main()
{

	int i,a;
	
	for(a=1;a<=7;a++)
	{
		for(i=1;i<=5;i++)
		{
			if(a%2==0){
				printf("#");
			}
			else{
				printf("*");
			}
		}
		printf("\n");
	}
	
	return 0;
}