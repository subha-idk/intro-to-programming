#include<stdio.h>

void display();
int a = 5;

int main(){
  display();
  printf("a: %d ",a);
  {
    int b = 10;
    printf("b: %d \n",b);
  }
  // printf("b: %d \n",b);
}

void display(){
  printf("a: %d ",a);
}