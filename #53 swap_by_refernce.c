#include<stdio.h>
void swap(int *a, int *b);
int main(){
	int x=3, y=5;
	swap(&x, &y);
	printf("x = %d & y= %d\n", x, y);
}
//call by reference
void swap(int *a, int *b){
	int t = *a;
	*a = *b;
	*b = t;
}
