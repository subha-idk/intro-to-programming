#include<stdio.h>

void func();
//header file->preprocessor

int main(){
	printf("Namaste\n");
	func();
	func();
	printf("end function");
	func();
	return 0;
}

void func(){
	printf("Hello!\n");
}


// Function Declaration
// Function Defination
// Function Calling

