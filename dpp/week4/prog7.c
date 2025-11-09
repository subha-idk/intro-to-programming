#include<stdio.h>
#include<stdlib.h>

// write a program to check Integer presence in an array of size n.
int is_present(int arr[], int size, int target); //function declaration

int main(){
  int n; //size of array
  printf("Enter the size of the array: ");
  scanf("%d",&n);

  int arr[n]; 

  //input elements
  for(int i=0;i<n;i++){
    printf("Enter element %d: ",i+1);
    scanf("%d",&arr[i]);
  }

  int target;
  printf("Enter the integer to search for: ");
  scanf("%d",&target);

  //check presence - function call
  int present = is_present(arr, n, target);

  if(present){
    printf("The integer %d is present in the array.\n", target);
  } else {
    printf("The integer %d is not present in the array.\n", target);
  }
  
  return 0;
}

int is_present(int arr[], int size, int target){
  for(int i=0; i<size; i++){
    if(arr[i] == target){
      return 1; // target found
    }
  }
  return 0; // target not found
}