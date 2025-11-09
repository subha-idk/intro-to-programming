#include<stdio.h>
#include<stdlib.h>

// write a program to find sum of all even numbers in an array of size n.
int sum_of_even_numbers(int arr[], int size); //function declaration

int main(){
  int n; //size of array
  printf("Enter the size of the array: ");
  scanf("%d",&n);

  int arr[n]; //array declaration

  //input elements
  for(int i=0;i<n;i++){
    printf("Enter element %d: ",i+1);
    scanf("%d",&arr[i]);
  }

  int sum = sum_of_even_numbers(arr, n); //function call

  printf("The sum of all even numbers in the array is: %d\n",sum);
  
  return 0;
}   

int sum_of_even_numbers(int arr[], int size){
  int sum = 0;
  for(int i = 0; i < size; i++){
    if(arr[i] % 2 == 0){
      sum += arr[i];
    }
  }
  return sum;
}