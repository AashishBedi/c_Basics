// Take a number n from user aand output its cube (n*n*n).

#include<stdio.h>
int main()
{
	int n;
	printf("number is: ");
	scanf("%d", &n);
	
	int cube = n*n*n;
	printf("cube is %d: ", cube);
	return 0;
}
