#include<stdio.h>
#include<stdlib.h>

struct node {
  int val;
  struct node *prev;
  struct node *next;
};

struct node *create_doubly_ll(int *arr, int n);
void display(struct node *head);

int main(){
  int arr[] = {40,50,60,12,25,67};
  int n = sizeof(arr)/sizeof(arr[0]);
  struct node *root = create_doubly_ll(arr,n);
  display(root);
  return 0;
}

struct node *create_doubly_ll(int *arr, int n){
  if(n==0)
    return NULL;

  struct node *head = NULL, *temp = NULL, *newNode = NULL;

  //create first node
  head = (struct node*)malloc(sizeof(struct node));
  head->val = arr[0];
  head->prev = NULL;
  head->next = NULL;

  temp = head;
  for(int i=1; i<n; i++){
    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->val = arr[i];
    newNode->prev = temp;
    newNode->next = NULL;

    temp->next = newNode;
    temp = newNode;
  }
  return head;
}

void display(struct node *head){
  struct node *temp = head;

  while(temp!=NULL){
    printf("%d <--> ",temp->val);
    temp = temp->next;
  }
  printf("NULL\n");
}