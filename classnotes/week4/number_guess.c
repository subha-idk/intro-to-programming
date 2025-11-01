#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int win_no, guess; 
	srand(time(0));

	win_no = (rand()%5)+1;  
	
	//taking input from user->guess
	
	printf("Enter a no (1-5) : ");
	scanf("%d", &guess);
	

	if(guess == win_no){
		printf("Correct! You won\n");
	}else{
		printf("Wrong! You lose\n");
	}
	printf("Win No: %d", win_no);
	
	
	return 0;
}