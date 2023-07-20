//Create a structure to store complex number. (use arrow operator)

#include<stdio.h>
#include<string.h>

struct complex{
	int real;
	int img;
};

int main(){
	struct complex number1 = {3,4};
	struct complex *ptr = &number1;
	printf("Real part = %d\n", ptr->real);
	printf("Img part = %d\n", ptr->img);
	
	return 0;
}
