//WAP to print table of a number
#include<stdio.h>
#include<math.h>
int main()
{
	int n, i;
	printf("Enter number: ");
	scanf("%d", &n);
	
	for(i=1; i<=10; i++){
		printf("%d\n", n * i);
	}
	
	return 0;
}
