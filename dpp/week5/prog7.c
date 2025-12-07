#include<stdio.h>
#include<stdlib.h>

int main(){
  printf("Number Element want to store: \n");
  int n;
  scanf("%d",&n);

  //allocate array of size n using malloc
  int* arr = (int*) malloc(n*sizeof(int));
  for(int i=0; i<n; i++){
    scanf("%d",&arr[i]);
  }

  for(int i=0; i<n; i++){
    printf("%d ",arr[i]);
  }

  free(arr);
  arr=NULL;

  return 0;
}