#include<stdio.h>

int main(){
  char str[] = "Hello";
  int len = 0;
  for(int i=0; ;i++){
    printf("i : %d\n",i);
    if(str[i]=='\0'){
      printf("This is Null Character\n");
      break;
    }
    len++;
  }
  printf("The len of the string is : %d",len);


  return 0;
}