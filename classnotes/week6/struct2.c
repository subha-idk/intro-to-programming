#include<stdio.h>

struct Employee{
  int id;
  float salary;
};

int main(){
  //staff - group of Employee 
  // int arr[]
  struct Employee staff[3];

  staff[0].id = 1001;
  staff[0].salary = 25000;

  staff[1].id = 1002;
  staff[1].salary = 20000;

  staff[2].id = 1003;
  staff[2].salary = 30000;

  printf("---Employee Records---\n");
  for(int i=0; i<3; i++){
    printf("Employee ID: %d, Salary: Rs. %0.2f\n",staff[i].id,staff[i].salary);
  }

  return 0;
}