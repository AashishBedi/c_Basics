// WAP to calculate sum of all numbers from 5 to 50
#include<stdio.h>
#include<math.h>
int main(){
	int i, sum=0;
	for(i=5;i<=50;i++){
		sum += i;
	}
	printf("Sum is: %d", sum);
	return 0;
}
