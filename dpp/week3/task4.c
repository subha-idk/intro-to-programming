#include<stdio.h>

int main(){
	
	int n;
	//Run the loop indefinitely | Break the loop with Even condition
	for(int i=0;i==0;){
		printf("Enter an even number: ");
		scanf("%d",&n); 

		//check the condition if even break else loop
		if(n%2==0){
			printf("\nValid entry!\n");
			break;
		}else{
			printf("Invalid! Please enter an even number: %d\n",n);
		}
	}

	return 0;
}