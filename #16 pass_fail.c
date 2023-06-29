// WAP to check if a student is passed or failed 
#include<stdio.h>
#include<math.h>
int main()
{
	int marks;
	printf("marks: ");
	scanf("%d",&marks);
	
	if(marks>30){
		printf("PASS");
	}
	else{
		printf("FAIL");
	}
	return 0;
}
