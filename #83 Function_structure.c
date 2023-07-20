#include<stdio.h>
#include<string.h>

struct student{
	int roll;
	float cgpa;
	char name[100];
};

void printInfo(struct student s1);


int main(){
	struct student s1= {1, 7.5, "Aashish"};
	printInfo(s1);
	printf("student.roll = %d\n", s1.roll);
	
	
	return 0;
}

void printInfo(struct student s1){
	printf("Student information: \n");
	printf("Student.roll = %d\n", s1.roll);
	printf("Student.cgpa = %f\n", s1.cgpa);
	printf("Student.name = %s\n", s1.name);
	
	s1.roll = 14;
}
