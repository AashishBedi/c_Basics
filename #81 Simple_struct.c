#include<stdio.h>
#include<string.h>

struct student{
	int roll;
	float cgpa;
	char name[100];
};

int main(){
	struct student s1= {1, 7.5, "Aashish"};
	printf("Student roll = %d\n", s1.roll);
	printf("Student cgpa = %f\n", s1.cgpa);
	printf("Student name = %s\n", s1.name);
	
	return 0;
}
