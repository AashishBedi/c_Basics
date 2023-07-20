//WAP to store the data of 3 students

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
	printf("student cgpa = %.2f\n\n", s1.cgpa);
	
	struct student s2;
	s2.roll = 45;
	strcpy(s2.name, "Ashish");
	s2.cgpa = 8.48;
	printf("student name = %s\n", s2.name);
	printf("student roll = %d\n", s2.roll);
	printf("student cgpa = %.2f\n\n", s2.cgpa);
	
	struct student s3;
	s3.roll = 64;
	strcpy(s3.name, "RAM");
	s3.cgpa = 7.8;
	printf("student name = %s\n", s3.name);
	printf("student roll = %d\n", s3.roll);
	printf("student cgpa = %.2f\n", s3.cgpa);
	return 0;
}
