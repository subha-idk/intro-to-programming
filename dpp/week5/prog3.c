#include<stdio.h>

int main(){
  int arr[] = {2,5,4,8,12,45};
  int n = sizeof(arr)/sizeof(arr[0]);
  int *ptr = arr;
  while(n--){
    printf("%d ",*ptr);
    *ptr++;
  }
  return 0;
}