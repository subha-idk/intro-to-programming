#include<stdio.h>
#include<stdlib.h>

// write a program to print all the odd no from 1 to 100 which are not divisible by 3 and 5.

int main(){
  printf("Odd numbers from 1 to 100 not divisible by 3 and 5 are:\n");
  for(int i=1;i<=100;i+=2){ // iterate through odd numbers only
    if(i%3 != 0 && i%5 != 0){ // check divisibility by 3 and 5
      printf("%d ",i);
    }
  }
  printf("\n");
  
  return 0;
}