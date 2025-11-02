#include <stdio.h>


int main(){

	// Define an Array of size 5 -> input -> avg -> print

	// arr[0] = 1, arr[1] = 2  -> element wise
	// int arr[5] = {1,2,3,4,5};  -> as a whole
	// scanf("%d",&arr[i]);   ->user input

	int arr[5];  //{ , , , , } res = 0

	for(int i=0; i<5; i++){
		printf("enter element %d : \n",i);
		scanf("%d",&arr[i]);
	}

	//avg -> total_sum / n   

	int total_sum = 0;  
	for(int i=0; i<5; i++){
		total_sum += arr[i];
	}

	float avg = total_sum/(5*1.0);
	printf("AVG : %0.2f",avg);

	return 0;
}









