#include<stdio.h>

int main(){

	int sum=0;
	// take 4 int no -> calculate avg of 4 no 
	// follow 2 decimal 32.26 not 32.264

	for(int i=1; i<=4; i++){
		int num;
		printf("\nEnter Score %d (e.g., 78) : ",i);
		scanf("%d",&num);
		sum = num + sum; // add each value to sum
	}

	float result = sum/4.0; //divide by 4.0(float) value chage sum(int)->float
	printf("The average score is %0.2f \n",result);

	return 0;
}