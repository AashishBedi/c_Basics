//Write a function to calculate sum, produce and averageof 2 numbers.Print that average in the main function
#include<stdio.h>
int sum(int a, int b);
int prod(int a, int b);
int avg(int a, int b);

int main(){
	int a=5, b= 7;
	printf("The sum is: %d\n",  sum(a,b));
	printf("The prod is: %d\n",  prod(a,b));
	printf("The avg is: %d\n",  avg(a,b));
	return 0;
}

int sum(int a, int b){
	return a+b;
}
int prod(int a, int b){
	return a*b;
}
int avg(int a, int b){
	return (a+b)/2;
}
