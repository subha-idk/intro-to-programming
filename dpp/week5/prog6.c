#include<stdio.h>

void swap(char* ch1, char* ch2);

int main(){
  char str[] = "CEMK"; 
  //Reverse the String as KMEC 
  int len = sizeof(str)/sizeof(str[0])-1; //ignore the last null charcter that's why -1
  int start=0,end=len-1;
  while(start<end){
    swap(&str[start],&str[end]);
    start++;end--;
  }

  printf("%s",str);

  return 0;
}

void swap(char* ch1, char* ch2){
  char ch = *ch2;
  *ch2 = *ch1;
  *ch1 = ch;
}