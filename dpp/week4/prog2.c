#include<stdio.h>
#include<stdlib.h>

// Write a program  to determine maximum value of an array 

int findMax(int arr[], int size); //function declaration

int main(){
  int n; //size of array
  printf("Enter the size of the array: ");
  scanf("%d",&n);

  int arr[n]; //array declaration

  for(int i=0;i<n;i++){
    printf("Enter element %d: ",i+1);
    scanf("%d",&arr[i]);
  }

  int max = findMax(arr,n); //function call
  printf("The max value is: %d\n",max);
  
  return 0;
}

int findMax(int arr[], int size){ //function definition
  int max = arr[0]; 

  for(int i=1;i<size;i++){
    if(arr[i]>max){
      max = arr[i]; //update max if current element is greater
    }
  }

  return max;
}