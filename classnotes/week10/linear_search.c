#include<stdio.h>

int search(int *arr, int n, int target);

int main(){
  int arr[] = {2,3,6,9,13,45,23};
  int n = sizeof(arr)/sizeof(arr[0]);
  int target = 2;

  int temp = search(arr,n,target); 
  printf("%d",temp);

  return 0;
}
//T.C: O(n) Best Case: O(1)
int search(int *arr, int n, int target){
  for(int i=0; i<n; i++){
    if(arr[i]==target){
      return i;
    }
  }
  return -1;
}