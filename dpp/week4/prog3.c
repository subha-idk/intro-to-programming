#include<stdio.h>
#include<stdlib.h>

// write a program to determin no of +ve nos in an array of size 10.

int no_of_positive_numbers(int arr[], int size); //function declaration

int main(){
  int arr[10]; //array declaration

  //input elements
  for(int i=0;i<10;i++){
    printf("Enter element %d: ",i+1);
    scanf("%d",&arr[i]);
  }

  //count positive numbers
  int count = no_of_positive_numbers(arr, 10);

  printf("The number of positive numbers in the array is: %d\n",count);
  
  return 0;
}

int no_of_positive_numbers(int arr[], int size){ //function definition
  int count = 0; 

  for(int i=0;i<size;i++){
    if(arr[i]>0){
      count++; 
    }
  }

  return count;
}