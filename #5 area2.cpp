// Write a program to calculate area of a circle.

#include<stdio.h>
int main()
{
	float pi= 3.14;
	float rad;
	printf("rad: ");
	scanf("%f", &rad);
	
	float area = pi * rad * rad;
	printf("area is %f", area);
	return 0;
}
