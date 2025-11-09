#include<stdio.h>
#include<stdlib.h>

// write a program to calculate eleement-wise sum of two arrays into a third array.

int* array_sum(int arr1[], int arr2[], int size); //function declaration

int main(){
  int n; //size of arrays
  printf("Enter the size of the arrays: ");
  scanf("%d",&n);

  int arr1[n];
  int arr2[n]; 
  

  //input elements for first array
  for(int i=0;i<n;i++){
    printf("Enter element %d of first array: ",i+1);
    scanf("%d",&arr1[i]);
  }

  //input elements for second array
  for(int i=0;i<n;i++){
    printf("Enter element %d of second array: ",i+1);
    scanf("%d",&arr2[i]);
  }

  int *arr3 = array_sum(arr1, arr2,n);

  printf("The element-wise sum of the two arrays is: ");
  for(int i=0;i<n;i++){
    printf("%d ",arr3[i]);
  }
  printf("\n");
  
  return 0;
}

int* array_sum(int arr1[], int arr2[], int size){ //function definition
  int *arr3 = (int*)malloc(size * sizeof(int)); //dynamically allocate memory for the result array

  for(int i=0;i<size;i++){
    arr3[i] = arr1[i] + arr2[i]; 
  }

  return arr3;
}