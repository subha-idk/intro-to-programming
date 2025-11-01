#include<stdio.h>

int main(){
	int num1;
	int num2;

	printf("enter num1: ");
	scanf("%d",&num1);
	printf("enter num2: ");
	scanf("%d",&num2);

	float res = num1/(num2*1.0);
	printf("res: %f",res);

	return 0;
}