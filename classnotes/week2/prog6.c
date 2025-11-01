#include<stdio.h>

int main(){
	//implicit & explicit
	float a = 3.3;
	float b = 3.65;
	
	float d = a+b;
	int c = a+b;
	
	printf("%d\n", c);
	printf("%0.1f", d);
	
	return 0;
}