// WAP to use while loop using scanf
#include<stdio.h>
#include<math.h>
int main()
{
	int i;
	printf("Enter number: ");
	scanf("%d", &i);
	
	while(i<=10)
	printf(" %d", i++);
	
	return 0;
}
