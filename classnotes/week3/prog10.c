#include<stdio.h>


int main(){

	int a; 
	int b;
	printf("Enter 1st num: ");
	scanf("%d",&a);
	printf("\nEnter 2nd num: ");
	scanf("%d",&b);

	int res = a+b;

	printf("sum of %d and %d is %d",a,b,res);
}