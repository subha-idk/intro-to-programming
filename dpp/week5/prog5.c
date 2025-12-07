#include<stdio.h>

int find_max(int* arr, int n);
int max(int a, int b);

int main(){
  int arr[] = {21,5,14,8,12,45};
  int n = sizeof(arr)/sizeof(arr[0]);
  int res = find_max(arr,n);
  printf("Largest Element: %d",res);
  return 0;
}

int find_max(int *arr, int n){
  int res = *arr;
  while(n--){
    res = max(res,*arr);
    *arr++;
  }
  return res;
}

int max(int a, int b){
  return a>b?a:b;
}