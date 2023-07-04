// Print the reverse of the table of a number n
#include<stdio.h>
#include<math.h>
int main(){
	int n,i;
	printf("Enter number: ");
	scanf("%d", &n);
	
	for(i=10; i>= 1; i--){
		printf("%d\n", n*i);
	}
	return 0;
}
