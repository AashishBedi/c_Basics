//2D Arrays
#include<stdio.h>

int main(){
	int marks[2][3];
	marks[0][0]=90;
	marks[0][1]=79;
	marks[0][2]=94;
	
	marks[1][0]=90;
	marks[1][1]=70;
	marks[1][2]=95;
	
	marks[2][0]=56;
	marks[2][1]=79;
	marks[2][2]=78;
	
	printf("Marks are: %d\n", marks[0][0]);
	printf("Marks are: %d\n", marks[0][1]);
	printf("Marks are: %d\n", marks[0][2]);
	printf("Marks are: %d\n", marks[1][0]);
    printf("Marks are: %d\n", marks[1][1]);
	printf("Marks are: %d\n", marks[1][2]);
	printf("Marks are: %d\n", marks[2][0]);
	printf("Marks are: %d\n", marks[2][1]);
	printf("Marks are: %d\n", marks[2][2]);

	return 0;
}
