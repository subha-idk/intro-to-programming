#include<stdio.h>

int main(){
	int n;
	printf("Enter a positive no: ");
	scanf("%d",&n);

	//now let's find out sum from 1 to n -> store the sum in res varibale
	int res = 0;
	for(int i=1; i<=n; i++){
		res = res + i;
	}
	
	printf("Total sum: %d",res);

	return 0;
}