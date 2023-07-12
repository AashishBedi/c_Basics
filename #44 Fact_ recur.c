// Find factorial of a number using recursion
#include<stdio.h>
#include<math.h>

int fact(int n);

int main(){
	printf("Factorial is: %d", fact(5));
	return 0;
}

int fact(int n){
	if(n==1){
		return 1;
	}
	int factNm1 = fact(n-1);  
	int factN = factNm1 * n;
	return factN;
}
