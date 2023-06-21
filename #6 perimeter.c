// WAP to calculate perimeter of rectangle. Take sides, a&b from the user.

#include<stdio.h>
int main()
{
	float length, width, perimeter;
	
	printf("length is: ");
	scanf("%f", &length);
	
	printf("width is: ");
	scanf("%f", &width);
	
	perimeter= 2*(length + width);
	
	printf("perimeter is %f: ", perimeter);
	
	return 0;
	
}
