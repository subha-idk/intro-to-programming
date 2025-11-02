#include<stdio.h>

float avg(int arr[], int n);

int main(){
	int arr1[3] = {3,6,4};
	int arr2[5] = {1,2,3,4,5};
	int arr3[10] = {};
	
	int res1 = avg(arr1, 3);
	printf("Avg of arr1 %0.2f\n", res1);

	float res2 = avg(arr2, 5);
	printf("Avg of arr2 %0.2f\n", res2);
}

float avg(int arr[], int n){
	int total_sum = 0;  
	for(int i=0; i<n; i++){
		total_sum += arr[i];
	}
	printf("%d",total_sum);

	float res = (total_sum*1.0)/n;
	
	return res;
}