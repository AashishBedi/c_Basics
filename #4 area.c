// Write a program to calculate area of a square.

#include<stdio.h>
int main()
{
	int side;
	printf("side: ");
	scanf("%d", &side);
	
	int area = side * side;
	printf("area is %d", area);
	return 0;
}
