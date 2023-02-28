#include<stdio.h>
int main()
{
	int arr[5]={44,55,66,77,88},key=77,i,track=0;
	
	for(i=0;i<=4;i++){
		if(arr[i]==key){
			printf("elemnet found at %d index\n",i);
			track=1;		
		}
	}
	
	if(track==0){
		printf("serarch fail\n");
	}
	
	
	return 0;
}