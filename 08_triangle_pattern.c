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
			printf("%d",j);
		}
		
		printf("\n");
	}
	
	return 0;
}