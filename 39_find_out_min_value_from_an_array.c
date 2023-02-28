#include<stdio.h>
int main()
{
	int marks[5]={55,88,65,43,91},i,min=marks[0];
	

	for(i=1;i<=4;i++){
		if(min>marks[i]){
			min=marks[i];
		}
	}
	printf("%d\n",min);
	
	return 0;
}