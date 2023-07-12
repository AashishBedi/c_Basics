//Tranverse an array
#include<stdio.h>
int main(){
	int i;
	int aadhar[5];
	
	//input
	int *ptr =  &aadhar[0];
	for(i=0; i<5; i++){
		printf("%d index: ",i);
		scanf("%d",(ptr+i));
	}
	
	//output
	for( i=0; i<5; i++){
		printf("%d index = %d\n", i, *(ptr+i));
	}
	return 0;
}
