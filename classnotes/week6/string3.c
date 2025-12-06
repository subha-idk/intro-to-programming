#include<stdio.h>

int main(){
  char str[6] = "hi";
  // for(int i=0; ;i++){
  //   printf("i : %d\n",i);
  //   if(str[i]=='\0'){
  //     break;
  //   }
  // }
  for(int i=0; i<6; i++){
    printf("i: %d and char : %c\n",i,str[i]);
  }

  return 0;
}