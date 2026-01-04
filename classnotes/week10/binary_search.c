#include<stdio.h>

int binarySearch(int *arr, int s, int e, int target);

int main(){
  int arr[] = {1,3,5,6,8,13,45,56};
  int target = 6;
  int n = sizeof(arr)/sizeof(arr[0]);

  int index = binarySearch(arr,0,n-1,target);
  printf("index: %d",index);
}

//T.C : O(logn)

int binarySearch(int *arr, int s, int e, int target){
  if(s<=e){
    int mid = (s+e)/2;
    if(arr[mid]==target)
      return mid;
    else if(target<arr[mid]){
      e = mid-1;
    }else if(target>arr[mid]){
      s = mid+1;
    }
  }
  return -1;
}