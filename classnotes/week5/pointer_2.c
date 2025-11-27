#include<stdio.h>

int main(){
  int arr[] = {5,6,9}; //first element is 5, arr itself is the add of first element
  int *ptr = arr;
  printf("Address of first element %p\n",ptr);
  printf("The value of that address is %d\n",*ptr);
  ptr++;
  printf("Address of second element %p\n",ptr);
  printf("The value of that address is %d",*ptr);
  return 0;
}