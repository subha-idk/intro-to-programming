#include<stdio.h>

void getGeometry(int r, float* area, float* circum);

int main(){
  int radius = 5;
  float area,circum;
  getGeometry(radius,&area,&circum);
  printf("The area is : %0.2f\n",area);
  printf("The circumference is %0.2f\n",circum);

  return 0;
}

void getGeometry(int r, float* area, float* circum){
  *area = 3.14*r*r;
  *circum = 3.14*r*2; 
}