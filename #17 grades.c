// WAP to give grades to a student
#include<stdio.h>
#include<math.h>
int main()
{
	int marks;
	printf("marks: ");
	scanf("%d",&marks);
	
	if(marks<30){
		printf("C");
	}
	else if(30<= marks && marks<70){
		printf("B");
	}
	else if(70<=marks<90){
		printf("A");
	}
	else if(90<=marks<=100){
		printf("O");
	}
	else{
		printf("Invalid");
	}
	return 0;
}
