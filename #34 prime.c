// WAP to check if a number is prime or not
#include<stdio.h>
#include<math.h>
int main(){
	int n, i, c=0;
	printf("Enter number: ");
	scanf("%d", &n);
	
	for (i=1; i<= n; i++){
		if(n % i == 0){
			c++;
		}
	}
	if(c == 2){
		printf("Prime");
	}
	else
	printf("Not Prime");
	
	return 0;
}
