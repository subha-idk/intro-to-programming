#include<stdio.h>
#include<stdlib.h>

// write a program to reverse an array of size n.

int reverse_array(int arr[], int size); //function declaration

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

  reverse_array(arr, n);

  printf("The reversed array is: ");
  for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
  }
  printf("\n");
  
  return 0;
}

int reverse_array(int arr[], int size){ //function definition
  int start = 0;
  int end = size - 1;
  while(start < end){
    // swap using extra variable -> other methods i.g without extra varible & xor swap can also be used
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
  return 0;
}