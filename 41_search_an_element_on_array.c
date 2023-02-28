
#include<stdio.h>
int main()
{
	int arr[5]={44,55,66,77,88},key=77,i,track=0;
	
	for(i=0;i<=4;i++){
		if(arr[i]==key){
			track=1;
			break;
		}
	}
	
	if(track==1){
		printf("serarch success\n");
	}
	else{
		printf("search failure\n");
	}
	
	return 0;
}

