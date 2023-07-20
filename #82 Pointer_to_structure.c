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
	
	struct student *ptr = &s1;
	printf("Student data address = %d\n", (*ptr)); //Full s1
	printf("Student roll = %d\n", (*ptr).roll); //access roll

	
	return 0;
}
