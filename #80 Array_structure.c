//Array of Structures

#include<stdio.h>
#include<string.h>

struct student{
	int roll;
	float cgpa;
	char name[100];
};

int main(){
	struct student ece[100];
	ece[0].roll = 1;
	strcpy(ece[0].name, "Aashish");
	ece[0].cgpa = 7.48;
	printf("student name = %s\n", ece[0].name);
	printf("student roll = %d\n", ece[0].roll);
	printf("student cgpa = %.2f\n", ece[0].cgpa);
	return 0;
}
