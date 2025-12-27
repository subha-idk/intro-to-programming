#include<stdio.h>
#include<string.h>

struct student{
  char name[50];
  int roll;
  float gpa;
};

struct point{
  int x;
  int y;
};

  // 1. Define The Data Type (using struct)
  // 2. Insert Data to inside 
  // 3. Access 

int main(){
  //name, roll_no, gpa
  // char name[] = "rahul";
  // int roll_no = 1;
  // float gpa = 7.5;
  // int roll;  data_type varibale_name;
  //struct point p1 = {2,3};
  //printf("(X: %d, Y: %d)",p1.x,p1.y);
  
  struct student s1;
  strcpy(s1.name, "Rahul");
  s1.roll = 1;
  s1.gpa = 7.5;

  printf("Name: %s\n",s1.name);
  printf("roll: %d\n",s1.roll);
  printf("GPA: %0.2f",s1.gpa);

  

  return 0;
}