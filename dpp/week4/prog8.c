#include<stdio.h>
#include<stdlib.h>

// write a program to determin the second largest element in an array of size n.

int find_second_largest(int arr[], int size); //function declaration

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

  int second_largest = find_second_largest(arr,n); //function call
  if(second_largest == -1){
    printf("There is no second largest element in the array.\n");
  } else {
    printf("The second largest element is: %d\n",second_largest);
  }
  
  return 0;
}

int find_second_largest(int arr[], int size){
  if(size < 2){
    return -1; // not enough elements for second largest
  }

  int largest = arr[0];
  int second_largest = -1;

  for(int i=1; i<size; i++){
    if(arr[i] > largest){
      second_largest = largest;
      largest = arr[i];
    } else if(arr[i] > second_largest && arr[i] != largest){
      second_largest = arr[i];
    }
  }

  return second_largest;
}