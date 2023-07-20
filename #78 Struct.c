#include<stdio.h>
#include<string.h>

struct student{
	int roll;
	float cgpa;
	char name[100];
};

int main(){
	struct student s1;
	s1.roll = 65;
	strcpy(s1.name, "Aashish");
	s1.cgpa = 7.48;
	printf("student name = %s\n", s1.name);
	printf("student roll = %d\n", s1.roll);
	printf("student cgpa = %.2f\n", s1.cgpa);
	return 0;
}
