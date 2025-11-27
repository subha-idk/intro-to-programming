#include <stdio.h>

// Call by value VS Call by Reference
// void swap(int a, int b);
void swap(int *a, int *b);

int main()
{

  int a = 5;
  int b = 9;
  printf("Before call:  a is %d , b is %d\n", a, b);
  // call by value
  // swap(a,b);
  swap(&a, &b);
  printf("After call: a is %d b is %d\n", a, b);

  return 0;
}

// Call by Refrence
void swap(int *a, int *b)
{
  int temp = *b;
  *b = *a;
  *a = temp;
}

// Call by Value
//  void swap(int a, int b){
//    int temp = b;
//    b = a;
//    a = temp;
//  }