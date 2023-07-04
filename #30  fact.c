// WAP to pri0nt the factorial of a number n
#include<stdio.h>
#include<math.h>
int main(){
	int n,i;
	printf("Enter number: ");
	scanf("%d", &n);
	
	int fact= 1;
	for(i=1; i<=n; i++){
		fact = fact*i;
	}
	printf("Final fact is: %d", fact);
	return 0;
}
