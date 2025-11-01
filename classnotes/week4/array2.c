#include<stdio.h>

int main(){
	float arr[3];
	for(int i=0; i<3; i++){
		printf("Enter float no for %d element\n",i+1);
		scanf("%f",&arr[i]);
	}

	for(int i=0; i<3; i++){
		printf("%0.2f ", arr[i]);
	}

	return 0;
}