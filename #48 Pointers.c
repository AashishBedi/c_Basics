//WAP of pointers
#include<stdio.h>
#include<math.h>
int main(){
	int age =22;
	int *ptr = &age;
	int _age = *ptr;
	printf("%d", *ptr);
	return 0;
}
