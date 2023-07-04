//WAP to print odd numbers from 5 to 50
#include<stdio.h>
#include<math.h>
int main(){
	int i;
	for(i=5; i<=50; i++){
		if(i%2 != 0){
			printf("%d\n", i);
		}
	}
	return 0;
}
