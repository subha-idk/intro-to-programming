// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>

int main() {
    int n;
    printf("enter how many element you want \n");
    scanf("%d",&n);
    int *arr = (int*) malloc(n*sizeof(int));
    
    if(arr==NULL){
        printf("failed\n");
        exit(1);
    }
    for(int i=0; i<2; i++){
        arr[i] = 10;
    }
    
    for(int i=0; i<10; i++){
        printf("%d ",arr[i]);
    }
    
    
    printf("true");
    free(arr);
    arr = NULL;

    return 0;
}