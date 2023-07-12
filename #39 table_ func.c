// Write a function to print table
#include<stdio.h>
#include<math.h>

void table(int n);

int main(){
	int n,i;
	printf("Enter first number: ");
	scanf("%d", &n);
	
	table(n); //Arguement
	return 0;
}

void table(int n){ //Parameter
	int i;
	for(i=1; i<=10; i++){
		printf("%d\n", n*i);
	}
}
