#include<stdio.h>
int main(){
	int marks[3];
	printf("Physics marks: ");
	scanf("%d", &marks[0]);
	printf("Maths marks: ");
	scanf("%d", &marks[1]);
	printf("Chem marks: ");
	scanf("%d", &marks[2]);
	
	printf("Physics = %d, Maths = %d, Chem = %d", marks[0], marks[1], marks[2]);
	return 0;
}
