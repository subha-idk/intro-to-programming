#include<stdio.h>
#include<stdlib.h>

// write a program to right shift an integer by 1 bit.
int right_shift(int num); //function declaration

int main(){
  int num; //input integer
  printf("Enter an integer: ");
  scanf("%d",&num);

  int shifted_num = right_shift(num); //function call

  printf("The number after right shifting by 1 bit is: %d\n",shifted_num);
  
  return 0;
}

int right_shift(int num){
  return num >> 1;
}