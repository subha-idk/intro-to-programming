#include <stdio.h>

void swap(int *a, int *b);

int main()
{
  int a = 5;
  int b = 3;
  printf("Before Swap: a:%d,b:%d\n", a, b);
  swap(&a, &b);
  printf("After Swap: a:%d,b:%d", a, b);
  return 0;
}

void swap(int *a, int *b)
{
  int temp = *b;
  *b = *a;
  *a = temp;
}