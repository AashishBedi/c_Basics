// WAP to print sum of numbers and its reverse
#include<stdio.h>
#include<math.h>
int main()
{
	int n, i;
	printf("Enter number: ");
	scanf("%d", &n);
	
	int sum = 0;
	for(i=0; i<=n; i++){
		sum += i;
	}
	printf("Sum is %d\n", sum);
	
	for(i=n; i>=1; i--)
	printf("%d\n", i);
	
	return 0;
}
