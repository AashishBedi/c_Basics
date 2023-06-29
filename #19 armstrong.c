// WAP to check if the given number is armstrong or not
#include<stdio.h>
#include<math.h>
int main()
{
	int n,r,sum=0,temp;
	printf("Enter num: ");
	scanf("%d", &n);
	temp=n;
	while(n>0){
		r = n%10;
		sum = sum+(r*r*r);
		n=n/10;
	}
	if(temp == sum){
		printf("Armstrong number");
	}
	else{
		printf("Not armstrong");
	}
	return 0;
}
