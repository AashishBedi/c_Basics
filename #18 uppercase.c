//WAP to find if the character entered by the user is uppercase or not
#include<stdio.h>
#include<math.h>
int main()
{
	char ch;
	printf("Entered Character: ");
	scanf("%c",&ch);
	
	if('A'>= ch && ch <= 'Z'){
		printf("Uppercase letter");
	}
	else if('a'>= ch && ch <= 'z'){
		printf("Lowercase letter");
	}
	
	else{
		printf("Invalid");
	}
	return 0;
}
