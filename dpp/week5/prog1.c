#include<stdio.h>

void update(int *ptr);

/*
Write a C program declares an integer variable and a pointer to it. 
Create a function that accepts the pointer and updates the value of the original 
variable to its square.
*/

int main(){
  int num = 5;
  int *ptr = &num;
  update(ptr);
  printf("After update:%d",num);
  return 0;
}

void update(int *ptr){
  *ptr = (*ptr)*(*ptr);
}