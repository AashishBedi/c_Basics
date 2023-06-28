// WAP to print average of 3 numbers

#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,avg;
	printf("The value of a: ");
	scanf("%d", &a);
	printf("The value of b: ");
	scanf("%d", &b);
	printf("The value of c: ");
	scanf("%d", &c);
	avg = (a+b+c)/3;
	printf("The average is: %d",avg);
	return 0;

}
