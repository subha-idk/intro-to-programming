#include<stdio.h>

int main(){
	int arr[3];  //define
	float arr[3];
	for(int i=0; i<3; i++){
		arr[i] = i + 1;
	}
	
	for(int i=0; i<3; i++){
		printf("%d ",arr[i]);
	}

	return 0;
}