// WAP to check if the character is digit or not
#include<stdio.h>
#include<math.h>
int main()
{
	char ch;
	printf("The ch is: ");
	scanf("%c",&ch);
	
	if(isdigit(ch))
	printf("Entered character is numeric character");
	else
	printf("not a numeric character");
	return 0;
}
