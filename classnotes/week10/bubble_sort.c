#include<stdio.h>

int main(){
  int arr[] = {19,2,13,16,3,4};
  int n = sizeof(arr)/sizeof(arr[0]);
  
  printf("Before Sorting\n");
  for(int i=0; i<n; i++){
    printf("%d ",arr[i]);
  }
  printf("\n");

  // Bubble Sort - TC: n^2
  for(int k=0; k<n-1; k++){
    for(int i=0,j=1;j<n-k;i++,j++){
      if(arr[i]<arr[j]){
        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
      }
    }
  }

  printf("After Sorting\n");
  for(int i=0; i<n; i++){
    printf("%d ",arr[i]);
  }
  return 0;
}