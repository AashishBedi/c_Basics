//WAP to print the smallest number
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	printf("the value of a: ");
	scanf("%d", &a);
	printf("the value of b: ");
	scanf("%d", &b);
	printf("the value of c: ");
	scanf("%d", &c);
	
	if(a<b && a<c)
	printf("a is smallest");
	if(b<a && b<c)
	printf("b is smallest");
	else
	printf("c is smallest");
}
