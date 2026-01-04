#include<stdio.h>

int main(){
  int total = 300;
  int n;
  printf("enter no of subject:");
  scanf("%d",&n);

  float avg = total*1.0/n;
  printf("avg : %0.2f",avg);
}