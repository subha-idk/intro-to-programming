#include <stdio.h>

int main()
{
  int n = 5; // variable
  // syntax of pointer int *ptr
  int *ptr = &n;
  printf("Address of n is %p", ptr);
  // pointer to store address of a variable
  return 0;
}
