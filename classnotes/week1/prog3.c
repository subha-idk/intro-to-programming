#include<stdio.h>


int main(){
	int num1;
	int num2;
	
	printf("enter num1: ");
	scanf("%d",&num1);
	printf("enter num2: ");
	scanf("%d",&num2);

	int res = num1+num2;
	
	printf("num1: %d & num2: %d\n",num1,num2);
	printf("result: %d",res);

	return 0;

}

