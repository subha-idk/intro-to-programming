#include<stdio.h>

struct node{
  int val;
  struct node *next;
};

int main(){
  //Linked list
  struct node a;
  struct node b;
  struct node c;
  
  a.val = 5;
  b.val = 9;
  c.val = 12;
  a.next = &b;
  b.next = &c;
  c.next = NULL;

  //display 5 9 12

  struct node *head = &a;
  while(1){
    printf("%d\n",head->val);
    printf("add of next element : %p\n",head->next);
    if(head->next == NULL) break;
    head = head->next;
  }
  
  return 0;
}