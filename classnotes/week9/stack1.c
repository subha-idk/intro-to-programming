#include<stdio.h>
#define SIZE 5

int stack[SIZE];
int top = -1;

void push(int val);
int pop();
int peek();
void display();


int main(){
  push(2);
  push(5);
  display();
  pop();
  push(56);
  display();

  return 0;
}

// Insert -> push
void push(int val){
  if(SIZE-1==top){
    printf("Stack Overflow\n");
    return;
  }
  top++;
  stack[top] = val;
  printf("%d is inserted\n",val);
}

int pop(){
  //stack is empty delete?
  if(top==-1){
    printf("Stack Underflow.\n");
    return -1;
  }
  int temp = stack[top];
  top--;
  printf("%d popped form the stack\n",temp);
  return temp;
}
int peek(){
  if(top==-1){
    printf("Stack Underflow.\n");
    return -1;
  }
  return stack[top];
}

void display(){
  for(int i=0; i<=top; i++){
    printf("%d ",stack[i]);
  }
  printf("\n");
}

