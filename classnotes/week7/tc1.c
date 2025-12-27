#include<stdio.h>

int search(int *arr, int target,int n);

//Linear Search TC: O(n)
//Binary Search TC: O(log(n))

int main(){
  int arr[] = {2,4,5,12,76,32,89,67};
  int target = 45;
  int n = sizeof(arr)/sizeof(arr[0]);
  int idx = search(arr,target,n);
  printf("target index : %d",idx);

  return 0;
}

int search(int *arr, int target,int n){
  for(int i=0;i<n;i++){
    if(arr[i]==target)
      return i;
  }
  return -1;
}