#include<stdio.h>
#include<stdlib.h>

// write a program to calculate avg mark of n students using arrays.

float calculate_average(int arr[], int size); //function declaration

int main(){
  int n; //number of students
  printf("Enter the number of students: ");
  scanf("%d",&n);

  int arr[n]; //array declaration

  //input marks
  for(int i=0;i<n;i++){
    printf("Enter mark of student %d: ",i+1);
    scanf("%d",&arr[i]);
  }

  float avg = calculate_average(arr, n); //function call

  printf("The average mark is: %.2f\n",avg);
  
  return 0;
}

float calculate_average(int arr[], int size){ //function definition
  int sum = 0;
  for(int i=0;i<size;i++){
    sum += arr[i];
  }
  return (float)sum/size;
}