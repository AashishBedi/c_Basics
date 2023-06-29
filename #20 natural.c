// WAP to check if the given number is natural number or not
#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	printf("Enter num: ");
	scanf("%d",&n);
	
	if(n>0){
		printf("Natural number");
	}
	else{
		printf("Not Natural number");
	}
	return 0;
}
