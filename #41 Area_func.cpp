//Write a function to calculate area of a  square, circle & rectangle
#include<stdio.h>
float square(float side);
float circle(float radius);
float rectangle(float l, float b);

int main(){
	float side, radius, l,b;
	printf("Enter side: ");
	scanf("%f", &side);
	printf("Enter radius: ");
	scanf("%f", &radius);
	printf("Enter length: ");
	scanf("%f",&l);
	printf("Enter breadth: ");
	scanf("%f", &b);
	
	printf("Area of square is: %f\n", square(side));
	printf("Area of circle is: %f\n", circle(radius));
	printf("Area of rectangle is: %f\n", rectangle(l,b));
    return 0;
}

float square(float side){
	return side*side;
}
float circle(float radius){
	return 3.14*radius*radius;
}
float rectangle(float l, float b){
	return l*b;
}
